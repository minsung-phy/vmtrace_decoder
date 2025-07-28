from anchor_detector import is_anchor_start, is_anchor_end

def stream_anchor_block(path):
    """
    파일을 한 줄씩 읽으며 anchor 블록만 yield.
    시작 'pxor xmm0,xmm1'　→　끝 'pxor xmm2,xmm3' 까지만 반환.
    """
    inside = False
    for idx, line in enumerate(open(path, "r")):
        cols = line.strip().split(';')
        if len(cols) < 4:
            continue

        addr      = cols[1].strip()
        asm_field = cols[3].strip()
        parts     = asm_field.split(' ', 1)
        mnemonic  = parts[0]
        opcode    = parts[1].strip() if len(parts) > 1 else ""

        row = {
            "index": idx,
            "address": addr,
            "mnemonic": mnemonic,
            "opcode": opcode,
        }

        if not inside and is_anchor_start(row):
            inside = True
            yield row      # 필요하면 anchor start 자신은 건너뛰어도 됨
            continue

        if inside:
            if is_anchor_end(row):
                yield row
                break      # 블록 끝났으니 파일 더 안읽고 종료
            yield row

