from instruction_mapper import map_instruction
from anchor_detector import detect_anchors
from reg_tracker import update, MEM
from utils import split_operands          # ← 공백·탭까지 안전 분리

def line_to_pseudocode(row, updater):
    ops = split_operands(row["opcode"])
    updater(row["mnemonic"], ops)             # 레지스터 추적
    return f"{row['index']}: {map_instruction(row['mnemonic'], ops)}"

def generate_pseudocode(trace):
    pseudocode = []

    start_idx, end_idx = detect_anchors(trace)
    if start_idx is None:
        pseudocode.append("// anchor not found")
        return pseudocode

    pseudocode.append("// VMProtect Anchor Start")
    for i in range(start_idx + 1, end_idx):
        row = trace[i]
        operands = split_operands(row["opcode"])
        update(row["mnemonic"], operands)          # ★ 값 추적
        decoded = map_instruction(row["mnemonic"], operands)
        pseudocode.append(f"{row['index']}: {decoded}")

    pseudocode.append("// VMProtect Anchor End")

    # ➋ anchor 끝나면 실제 C‑식 출력
    if "result" in MEM:                            # MEM 키 확인
        pseudocode.append(f"//  ==> C : result = {MEM['result']};")

    return pseudocode

