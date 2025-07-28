# **vmtrace_decoder : VMProtect trace 기반 C 코드 복원 분석기 구현**

### 1. 프로젝트 개요 및 목표

- VMProtect는 실행 코드를 난독화하여 분석을 어렵게 만드는 도구이다.
- 본 프로젝트의 목표는 VMProtect가 어떻게 `A xor B` 연산을 난독화하였는지 **역난독화**를 하는 것이다.
- 이를 위해 VMProtect 가상화 구간(anchor) 내에서 수행되는 `A xor B` 연산을 추출해 원본 C 코드를 복원한다.
- trace 로그가 1 만줄 이상이므로 수작업 분석 부담을 획기적으로 줄이기 위해 자동화를 해야한다고 생각했다.

### 2. 초기 설계 & 문제점

- 처음에는 분석 과정을 모듈별로 나누어 유지보수성과 확장성을 고려한 구조를 설계하였다.
    
    ```
    vmtrace_decoder/
    ├── main.py                // 실행 진입점: trace 파일 로드, anchor 추출, pseudocode 생성 및 출력
    ├── trace_parser.py        // trace 로그 파일을 파싱하고 anchor 블록 범위 추출
    ├── anchor_detector.py     // anchor 시작(pxor xmm0,xmm1)과 끝(pxor xmm2,xmm3) 위치 탐지
    ├── instruction_mapper.py  // 어셈블리 명령어 → 의사코드(pseudocode)로 매핑
    ├── pseudocode_gen.py      // anchor 내 명령어를 기반으로 pseudocode 생성
    ├── reg_tracker.py         // 레지스터 상태 업데이트 및 조회 기능 (선택적으로 pseudocode 해석 시 활용)
    ├── utils.py               // 보조 유틸 함수들 (예: operand 정규화, 레지스터 식별 등)
    └── reconstructed.c        // 결과 pseudocode가 저장되는 파일 (main.py에서 출력됨)
    ```

    ```
    1. `main.py`에서 `parse_trace()`로 trace 파일을 파싱하고,
    2. `extract_anchor_block()`로 anchor 범위만 추출,
    3. `generate_pseudocode()`로 해당 명령어들을 해석 및 변환,
    4. `map_instruction()`으로 의미 있는 표현으로 매핑하여 출력함.
    
    → `reg_tracker.py`와 `utils.py`는 코드 해석 정밀도를 높이기 위해 사용됨.
    ```
    
- 각 파일은 역할이 나뉘어 있고, 전체 trace를 분석해서 pseudocode까지 뽑아내는 구조이다.
- 전체 trace를 구조적으로 다루려다 보니, 메모리 사용량이 너무 커졌고 OOM(Out Of Memory) 문제가 발생했다.
- 복잡한 pseudocode 생성을 목표로 했으나, trace가 너무 방대해 완전한 디코딩은 현실적으로 어렵다는 판단을 하게 됐다.

### 3. 해결 : 경량 XOR 추출기 개발

- 복잡한 구조 대신, XOR 패턴만 집중적으로 찾아내는 스크립트를 별도로 개발하였다.
- **`smart_xor_finder.py`**: 슬라이딩 윈도우 방식으로 `mov → xor → mov` 패턴을 찾아 C식으로 출력
    
    ```python
    import re, sys
    
    MEM_SRC  = re.compile(r"mov[l]?\s+(?P<reg>[er]?[abcds]x|r\d{1,2}[bwd]?)\s*,\s*(?:[a-z]+\s+ptr\s+)?\[(?P<src>[^\]]+)\]", re.I)
    MEM_XOR  = re.compile(r"xor[l]?\s+(?P<reg>[er]?[abcds]x|r\d{1,2}[bwd]?)\s*,\s*(?:[a-z]+\s+ptr\s+)?\[(?P<src>[^\]]+)\]", re.I)
    MEM_DST  = re.compile(r"mov[l]?\s+(?:[a-z]+\s+ptr\s+)?\[(?P<dst>[^\]]+)\]\s*,\s*(?P<reg>[er]?[abcds]x|r\d{1,2}[bwd]?)", re.I)
    
    def find_xor(log):
        stage1 = {}          # REG -> srcA
        stage2 = {}          # REG -> (srcA, srcB)
    
        for ln, line in enumerate(open(log), 1):
            try:
                asm = line.split(';', 4)[3].strip()
            except IndexError:
                continue
    
            if (m := MEM_SRC.fullmatch(asm)):
                stage1[m['reg'].lower()] = m['src']
                continue
    
            if (m := MEM_XOR.fullmatch(asm)):
                reg = m['reg'].lower()
                if reg in stage1:
                    stage2[reg] = (stage1[reg], m['src'])
                continue
    
            if (m := MEM_DST.fullmatch(asm)):
                reg = m['reg'].lower()
                if reg in stage2:
                    srcA, srcB = stage2[reg]
                    dst        = m['dst']
                    print(f"// ==> C : {dst} = {srcA} ^ {srcB};   // found at line {ln}")
                    return
        print("// xor‑pattern not found")
    
    if __name__ == "__main__":
        if len(sys.argv) != 2:
            print("usage: python3 main.py anchor_block.log")
            sys.exit(1)
        find_xor(sys.argv[1])
    ```
    
- 실행 결과 :
    
    <img width="818" height="35" alt="image" src="https://github.com/user-attachments/assets/2e4616a4-b3f9-4112-b352-98a369c8c78f" />

    
### 4. 핵심 과제만 해결하는 경량 파이프라인

- 경량 XOR 추출기는 모듈식 구조가 깨져서 유지보수성과 확장성이 떨어진다고 판단하였다.
- 그래서 핵심 XOR 연산 추출에 집중한 최소 구조로 경량화하여 다음 4개의 모듈로 재구성하였다.
    
    
    | 파일 | 역할 |
    | --- | --- |
    | **trace_parser.py** | 로그를 **스트림**으로 읽어 `{idx, mnemonic, opcode, raw}` yield |
    | **anchor_detector.py** | `pxor xmm1,xmm0 ~ pxor xmm3,xmm2` 범위만 **on‑the‑fly** 필터 |
    | **pseudocode_gen.py** | 1. XOR 3‑단계 패턴 검출(`mov reg,[a]` → `xor reg,[b]` → `mov [c],reg`) 
    2. 매칭 성공 시 `// ==> C : c = a ^ b;` 출력 
    3. 나머지 행은 간단 매핑으로 의사‑코드화 |
    | **main.py** | 전체 조립·출력, `reconstructed.c` 파일 생성 |
- 장점 :
    - 메모리 사용량 50MB 미만으로 경량화
    - 모듈식 구조 유지하면서 실행 속도 및 실용성 개선
    - 4개의 파이썬 파일만으로 XOR 복원 수행 가능
- 실행 결과 :
    
    <img width="643" height="57" alt="image (1)" src="https://github.com/user-attachments/assets/11e9a0b3-b249-49e0-9a52-c8e72237edca" />


### 5. 기술적 하이라이트

- **느슨한 상태 머신 기반 XOR 탐지**
    
    REG 단위로 `mov → xor → store` 3단계를 추적하며, 수십 줄 간격이 있어도 정확히 XOR 패턴을 잡아냄.
    
- **스트리밍 파싱**
    
    trace를 한 줄씩 읽고 처리하므로 OOM 문제 없이 대형 로그도 분석 가능.
    
- **모듈 최소화 + 유연성 확보**
    
    4개 모듈로 구성된 파이프라인은 필요한 경우 초기 대형 분석기 구조 (`reg_tracker`, `instruction_mapper`)와 plug-in 방식으로 연동 가능.
    

### 6. 코드

- **main.py :**
    
    ```python
    import argparse, os
    from anchor_detector import iter_anchor_rows
    from pseudocode_gen import to_pseudocode, find_xor
    
    def main():
        # 명령줄 인자 파서 생성 (trace 로그 파일 경로 받기 위함)
        ap = argparse.ArgumentParser()
        ap.add_argument("trace", help="trace log file")  # trace 로그 파일 경로 필수 입력
        args = ap.parse_args()
    
        # anchor 구간의 명령어들을 리스트로 추출 (pxor ~ pxor 사이의 명령어들)
        anchor_rows = list(iter_anchor_rows(args.trace))
        if not anchor_rows:
            print("anchor not found")  # anchor 구간이 없으면 종료
            return
    
        # 3단계 mov-xor-store 패턴을 통한 XOR 식 추출
        print(find_xor(anchor_rows))
    
        # 추출된 pseudocode를 파일로 저장
        out = "reconstructed.c"
        with open(out, "w") as f:
            f.write("// VMProtect anchor pseudocode\n")  # 헤더 주석
            for r in anchor_rows:
                # 각 명령어를 pseudocode 형태로 변환하여 기록
                f.write(to_pseudocode(r) + "\n")
        # 사용자에게 출력 완료 위치 안내
        print(f"[+] pseudocode → {os.path.abspath(out)}")
    
    # 진입점 정의 (스크립트로 실행될 때만 main() 실행)
    if __name__ == "__main__":
        main()
    ```
    
    - 이는 anchor 블록 내 명령어만 읽고, XOR 패턴이 있는지 먼저 확인하고, 모든 명령어를 pseudocode로 출력한다.
    
- **anchor_detector.py :**
    
    ```python
    # anchor 시작 조건: pxor xmm1, xmm0일 경우
    def is_anchor_start(row):
        return row["mnemonic"] == "pxor" and "xmm1" in row["opcode"] and "xmm0" in row["opcode"]
    
    # anchor 종료 조건: pxor xmm3, xmm2일 경우
    def is_anchor_end(row):
        return row["mnemonic"] == "pxor" and "xmm3" in row["opcode"] and "xmm2" in row["opcode"]
    
    # trace 로그 파일에서 anchor 블록 내의 row만 순차적으로 반환
    def iter_anchor_rows(path):
        inside = False  # anchor 블록 내부 여부
        # trace_parser.py의 iter_rows 함수를 동적으로 import 하여 한 줄씩 파싱
        for row in __import__("trace_parser").iter_rows(path):
            # 아직 anchor 시작 전이면, 시작 조건 확인
            if not inside and is_anchor_start(row):
                inside = True       # anchor 블록 진입
                yield row           # 시작 명령어도 포함
                continue
            if inside:
                yield row           # anchor 블록 내부 명령어 반환
                if is_anchor_end(row):
                    break           # anchor 끝나면 중단
    ```
    
    - 이 구조는 streaming 방식으로 설계되어 있어 메모리 효율이 높고, trace 전체가 아닌 anchor 블록만 추출하여 후속 분석 (예: XOR 검출, pseudocode 변환)에 넘긴다.
    - 즉, 매우 긴 trace에서도 OOM 없이 처리할 수 있는 구조이다.

- **trace_parser.py :**
    
    ```python
    def iter_rows(path):
        """
        trace 로그 파일을 한 줄씩 파싱하여 dict로 변환해 yield하는 제너레이터 함수.
        각 줄은 다음 필드를 포함하는 딕셔너리로 변환됨:
          - idx: 현재 줄 번호 (0부터 시작)
          - mnemonic: 어셈블리 명령어(mnemonic), 예: 'mov', 'xor'
          - opcode: 명령어 뒤의 첫 operand 문자열 (예: 'rdi,[rax+0x10]')
          - raw: 원본 trace 로그 한 줄 (줄바꿈 제거)
        """
        with open(path, 'r') as f:
            for idx, line in enumerate(f):
                # 한 줄을 세미콜론(;) 기준으로 최대 5개까지 분할
                parts = line.strip().split(';', 4)
                if len(parts) < 4:
                    continue  # 분석 가능한 어셈블리 명령이 없으면 skip
    
                # 4번째 필드 (index 3)에 어셈블리 명령어가 위치함
                mnemonic, *rest = parts[3].strip().split(' ', 1)
                opcode = rest[0] if rest else ""
    
                yield {
                    "idx": idx,                         # 원본 trace에서의 줄 번호
                    "mnemonic": mnemonic.lower(),       # 소문자 통일
                    "opcode": opcode.strip(),           # 첫 번째 operand
                    "raw": line.rstrip()                # 원본 로그 (줄바꿈 제거)
                }
    ```
    
    - 이 구조는 **stream 기반** trace 파싱이다.
    - 이후의 `anchor_detector.py`, `pseudocode_gen.py` 등의 모듈이 **필터링/패턴 분석**할 수 있게끔 기본 정보를 제공한다.
    - 로그 손실 없이 전체 라인을 `raw`로 보관한다.

- **pseudocode_gen.py :**
    
    ```python
    import re
    
    # 기본 명령어 → 간단 pseudocode 매핑
    MAP = {
        "mov":  lambda ops: f"{ops[0]} = {ops[1]}",
        "add":  lambda ops: f"{ops[0]} += {ops[1]}",
        "sub":  lambda ops: f"{ops[0]} -= {ops[1]}",
        "xor":  lambda ops: f"{ops[0]} ^= {ops[1]}",
        "call": lambda ops: f"call {ops[0]}",
        "ret":  lambda ops: "return",
    }
    
    def to_pseudocode(row):
        ops = [o.strip() for o in row["opcode"].split(',')] if row["opcode"] else []
        fn = MAP.get(row["mnemonic"], lambda o: f"{row['mnemonic']} {' ,'.join(o)}  /*manual*/")
        return f"{row['idx']:>6}: {fn(ops)}"
    
    # XOR 3단계 패턴 탐지용 정규식
    MOV_SRC = re.compile(r"mov[l]?\s+(?P<reg>\w+)\s*,\s*(?:[a-z]+\s+ptr\s+)?\[(?P<src>[^\]]+)\]", re.I)
    XOR_OP  = re.compile(r"xor[l]?\s+(?P<reg>\w+)\s*,\s*(?:[a-z]+\s+ptr\s+)?\[(?P<src>[^\]]+)\]", re.I)
    MOV_DST = re.compile(r"mov[l]?\s+(?:[a-z]+\s+ptr\s+)?\[(?P<dst>[^\]]+)\]\s*,\s*(?P<reg>\w+)", re.I)
    
    def find_xor(rows):
        s1, s2 = {}, {}  # reg → src / (src, src)
        for r in rows:
            asm = r["mnemonic"] + " " + r["opcode"]
            if (m := MOV_SRC.fullmatch(asm)):
                s1[m["reg"].lower()] = m["src"]
                continue
            if (m := XOR_OP.fullmatch(asm)):
                reg = m["reg"].lower()
                if reg in s1:
                    s2[reg] = (s1[reg], m["src"])
                continue
            if (m := MOV_DST.fullmatch(asm)):
                reg = m["reg"].lower()
                if reg in s2:
                    a, b = s2[reg]
                    return f"// ==> C : {m['dst']} = {a} ^ {b};   // line {r['idx']}"
        return "// xor‑pattern not found"
    ```
    

### 7. 예측과 다른 결과와 그 이유

<img width="1805" height="877" alt="image (2)" src="https://github.com/user-attachments/assets/1b23e7c0-441f-4328-be25-3c58ecb36ae5" />

<img width="643" height="57" alt="image (3)" src="https://github.com/user-attachments/assets/619093d0-d3ec-4516-8c6c-3c9e592618af" />

왜 결과에 “A xor B”가 바로 보일까?

- **CPU‑레벨 현실**
    - x86‑64에는 이미 `xor reg, op` 같은 1 사이클짜리 전용 XOR 명령이 있다
    - 따라서 **가상화/난독화/VM 트레이스**라도, “성능이나 코드 크기”를 우선하면 복잡하게 분해하지 않고 그대로 `xor`를 호출하는 경우가 흔하다.
- **트레이스에 찍힌 실제 예시**
    
    아래 두 줄을 보면, 레지스터에 메모리를 XOR하여 다시 저장하는 전형적인 패턴이 그대로 나타난다.
    
    <img width="1895" height="37" alt="스크린샷 2025-07-29 022155" src="https://github.com/user-attachments/assets/e5bec231-2ca9-48ec-9ff1-24615fe4509c" />

    <img width="1889" height="39" alt="스크린샷 2025-07-29 022233" src="https://github.com/user-attachments/assets/3e51a76e-4bf2-408d-8d87-c51f34827cd5" />

    - 트레이스의 위치: 128190행과 130532행
- **논리식으로 확장하지 않은 이유**
    - (~(~a & b) & ~(a & ~b)) 같은 전개는 **논리적으로는 동치**지만, 네 번의 NOT + 두 번의 AND + 두 번의 NOT + 한 번의 AND → 최소 **5 ~ 6 개의 명령**이 필요하다.
    - 하드웨어 XOR 한 줄이면 끝나는데 굳이 분해할 이유가 없으므로, VM 설계자가 “그 정도는 그대로 두자”라고 판단했을 가능성이 높다고 생각한다.
    - 반대로, **더 강한 난독화 모드**(예: Full Boolean Expansion, White‑Box 암호 등)를 켜면 실제로 위 같은 형태로 쪼개기도 한다고 한다.

→ 만약 결과가 여러 논리식의 합으로 나왔다면 다른 패턴(AND/NOT 확장형)도 잡아내도록 main.py를 확장할 수 있다.

→ 예를 들어 `(mov …; not …; and …; …)` 식으로 정규식을 추가하면 된다.
