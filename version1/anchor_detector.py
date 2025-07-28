def detect_anchors(trace):
    """
    trace에서 anchor 시작과 끝을 찾는다.
    시작은 'pxor xmm1, xmm0', 끝은 'pxor xmm3, xmm2'
    """
    start_idx, end_idx = None, None
    for i, row in enumerate(trace):
        if row["mnemonic"] == "pxor" and "xmm1" in row["opcode"] and "xmm0" in row["opcode"]:
            start_idx = i
        elif row["mnemonic"] == "pxor" and "xmm3" in row["opcode"] and "xmm2" in row["opcode"]:
            end_idx = i
            break

    if start_idx is not None and end_idx is not None and start_idx < end_idx:
        return start_idx, end_idx
    return None, None

def _is_same_set(opcode, a, b):
    return {x.strip() for x in opcode.split(',')} == {a, b}

def _same_set(opcode, *regs):
    return {o.strip() for o in opcode.split(',')} == set(regs)

def is_anchor_start(row):
    return row["mnemonic"] == "pxor" and _is_same_set(row["opcode"], "xmm0", "xmm1")

def is_anchor_end(row):
    return row["mnemonic"] == "pxor" and _is_same_set(row["opcode"], "xmm2", "xmm3")

