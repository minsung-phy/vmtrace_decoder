import argparse, os
from anchor_detector import iter_anchor_rows
from pseudocode_gen import to_pseudocode, find_xor

def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("trace", help="trace log file")
    args = ap.parse_args()

    anchor_rows = list(iter_anchor_rows(args.trace))
    if not anchor_rows:
        print("anchor not found"); return

    # ① XOR 식 먼저
    print(find_xor(anchor_rows))

    # ② 의사코드 저장
    out = "reconstructed.c"
    with open(out, "w") as f:
        f.write("// VMProtect anchor pseudocode\n")
        for r in anchor_rows:
            f.write(to_pseudocode(r) + "\n")
    print(f"[+] pseudocode → {os.path.abspath(out)}")

if __name__ == "__main__":
    main()
