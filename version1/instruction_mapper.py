def map_instruction(mnemonic, operands):
    match mnemonic:
        case "mov" | "movl": return f"{operands[0]} = {operands[1]}"
        case "add": return f"{operands[0]} += {operands[1]}"
        case "sub": return f"{operands[0]} -= {operands[1]}"
        case "xor": return f"{operands[0]} ^= {operands[1]}"
        case "and": return f"{operands[0]} &= {operands[1]}"
        case "or": return f"{operands[0]} |= {operands[1]}"
        case "shl": return f"{operands[0]} <<= {operands[1]}"
        case "shr": return f"{operands[0]} >>= {operands[1]}"
        case "cmp": return f"compare({operands[0]}, {operands[1]})"
        case "test": return f"test({operands[0]}, {operands[1]})"
        case "lea": return f"{operands[0]} = &{operands[1]}"
        case "push": return f"push({operands[0]})"
        case "pop": return f"{operands[0]} = pop()"
        case "call": return f"call {operands[0]}"
        case "ret": return "return"
        case "jmp": return f"jump to {operands[0]}"
        case "inc": return f"{operands[0]}++"
        case "dec": return f"{operands[0]}--"
        case "not": return f"{operands[0]} = ~{operands[0]}"
        case "neg": return f"{operands[0]} = -{operands[0]}"
        case "pxor":
            if operands == ["xmm1", "xmm0"]:
                return "// VMProtect Anchor Start"
            elif operands == ["xmm3", "xmm2"]:
                return "// VMProtect Anchor End"
            return f"{operands[0]} ^= {operands[1]}  # xmm"
        case "nop": return "nop"
        case _: return f"{mnemonic} {' '.join(operands)}  // 수동 해석 필요"

