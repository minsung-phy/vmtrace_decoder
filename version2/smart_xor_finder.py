import re, sys

MEM_SRC  = re.compile(r"mov[l]?\s+(?P<reg>[er]?[abcds]x|r\d{1,2}[bwd]?)\s*,\s*(?:[a-z]+\s+ptr\s+)?\[(?P<src>[^\]]+)\]", re.I)
MEM_XOR  = re.compile(r"xor[l]?\s+(?P<reg>[er]?[abcds]x|r\d{1,2}[bwd]?)\s*,\s*(?:[a-z]+\s+ptr\s+)?\[(?P<src>[^\]]+)\]", re.I)
MEM_DST  = re.compile(r"mov[l]?\s+(?:[a-z]+\s+ptr\s+)?\[(?P<dst>[^\]]+)\]\s*,\s*(?P<reg>[er]?[abcds]x|r\d{1,2}[bwd]?)", re.I)

def find_xor(log):
    stage1 = {}          # REG -> srcA
    stage2 = {}          # REG -> (srcA, srcB)

    for ln, line in enumerate(open(log), 1):
        try:
            asm = line.split(';', 4)[3].strip()
        except IndexError:
            continue

        if (m := MEM_SRC.fullmatch(asm)):
            stage1[m['reg'].lower()] = m['src']
            continue

        if (m := MEM_XOR.fullmatch(asm)):
            reg = m['reg'].lower()
            if reg in stage1:
                stage2[reg] = (stage1[reg], m['src'])
            continue

        if (m := MEM_DST.fullmatch(asm)):
            reg = m['reg'].lower()
            if reg in stage2:
                srcA, srcB = stage2[reg]
                dst        = m['dst']
                print(f"// ==> C : {dst} = {srcA} ^ {srcB};   // found at line {ln}")
                return
    print("// xor‑pattern not found")

if __name__ == "__main__":
    if len(sys.argv) != 2:
        print("usage: python3 main.py anchor_block.log")
        sys.exit(1)
    find_xor(sys.argv[1])

