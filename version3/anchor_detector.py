def is_anchor_start(row):
    return row["mnemonic"] == "pxor" and "xmm1" in row["opcode"] and "xmm0" in row["opcode"]

def is_anchor_end(row):
    return row["mnemonic"] == "pxor" and "xmm3" in row["opcode"] and "xmm2" in row["opcode"]

def iter_anchor_rows(path):
    inside = False
    for row in __import__("trace_parser").iter_rows(path):
        if not inside and is_anchor_start(row):
            inside = True
            yield row
            continue
        if inside:
            yield row
            if is_anchor_end(row):
                break
