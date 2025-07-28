def iter_rows(path):
    """
    로그를 한 줄씩 dict 로 변환해 yield.
    {index, mnemonic, opcode, rest_of_line}
    """
    with open(path, 'r') as f:
        for idx, line in enumerate(f):
            parts = line.strip().split(';', 4)
            if len(parts) < 4:
                continue
            mnemonic, *rest = parts[3].strip().split(' ', 1)
            opcode = rest[0] if rest else ""
            yield {
                "idx": idx,
                "mnemonic": mnemonic.lower(),
                "opcode": opcode.strip(),
                "raw": line.rstrip()
            }
