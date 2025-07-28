import re

# ── 간단 매핑용
MAP = {
    "mov": lambda ops: f"{ops[0]} = {ops[1]}",
    "add": lambda ops: f"{ops[0]} += {ops[1]}",
    "sub": lambda ops: f"{ops[0]} -= {ops[1]}",
    "xor": lambda ops: f"{ops[0]} ^= {ops[1]}",
    "call": lambda ops: f"call {ops[0]}",
    "ret": lambda ops: "return",
}

def to_pseudocode(row):
    ops = [o.strip() for o in row["opcode"].split(',')] if row["opcode"] else []
    fn = MAP.get(row["mnemonic"], lambda o: f"{row['mnemonic']} {' ,'.join(o)}  /*manual*/")
    return f"{row['idx']:>6}: {fn(ops)}"

# ── XOR 3‑단계 탐지용 정규식
MOV_SRC = re.compile(r"mov[l]?\s+(?P<reg>\w+)\s*,\s*(?:[a-z]+\s+ptr\s+)?\[(?P<src>[^\]]+)\]", re.I)
XOR_OP  = re.compile(r"xor[l]?\s+(?P<reg>\w+)\s*,\s*(?:[a-z]+\s+ptr\s+)?\[(?P<src>[^\]]+)\]", re.I)
MOV_DST = re.compile(r"mov[l]?\s+(?:[a-z]+\s+ptr\s+)?\[(?P<dst>[^\]]+)\]\s*,\s*(?P<reg>\w+)", re.I)

def find_xor(rows):
    s1, s2 = {}, {}           # reg → srcA / (srcA,srcB)
    for r in rows:
        asm = r["mnemonic"] + " " + r["opcode"]
        if (m := MOV_SRC.fullmatch(asm)):
            s1[m["reg"].lower()] = m["src"];         continue
        if (m := XOR_OP.fullmatch(asm)):
            reg = m["reg"].lower()
            if reg in s1:
                s2[reg] = (s1[reg], m["src"]);       continue
        if (m := MOV_DST.fullmatch(asm)):
            reg = m["reg"].lower()
            if reg in s2:
                a, b = s2[reg]
                return f"{m['dst']} = {a} ^ {b};   // line {r['idx']}"
    return "// xor‑pattern not found"
