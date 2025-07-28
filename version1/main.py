import argparse
from trace_parser import stream_anchor_block
from pseudocode_gen import line_to_pseudocode   # 한 줄씩!
from reg_tracker import update, MEM

def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("trace_file")
    args = ap.parse_args()

    with open("reconstructed.c", "w") as out:
        out.write("// Decompiled pseudocode from trace\n")
        inside = False
        for row in stream_anchor_block(args.trace_file):
            # anchor start/end 라인은 generate 함수가 알아서 주석 처리
            code = line_to_pseudocode(row, update)   # ← 한 줄 변환
            out.write(code + "\n")

        # anchor 끝난 뒤 C‑식 한 줄 출력
        if "result" in MEM:
            out.write(f"// ==> C : result = {MEM['result']};\n")

if __name__ == "__main__":
    main()

