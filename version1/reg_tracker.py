REG = {}          # 레지스터 -> 심볼/값
MEM = {}          # 변수 이름 -> 값

def update(mn, ops):
    if mn in ("mov", "movl") and len(ops) == 2:
        dst, src = ops
        REG[dst] = REG.get(src, src)           # 복사
    elif mn == "xor" and len(ops) == 2:
        dst, src = ops
        REG[dst] = f"({REG.get(dst,dst)} ^ {REG.get(src,src)})"
    elif mn in ("mov", "movl") and ops[0].startswith('['):
        # 메모리 저장 예: mov [result], eax
        var = ops[0].strip('[]')
        MEM[var] = REG.get(ops[1], ops[1])

def get_register_value(reg):
    return REG.get(reg, reg)

