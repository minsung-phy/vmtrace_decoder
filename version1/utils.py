def split_operands(opcode):
    if not opcode:
        return []
    return [op.strip() for op in opcode.split(",")]

