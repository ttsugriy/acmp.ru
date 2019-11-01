import re

VALID_MOVE_RE = re.compile("[A-H][1-8]-[A-H][1-8]")

move = input()
if not VALID_MOVE_RE.match(move):
    print("ERROR")
else:
    start, end = move.split("-")
    x_diff = abs(ord(start[0]) - ord(end[0]))
    y_diff = abs(ord(start[1]) - ord(end[1]))
    print("YES" if (x_diff, y_diff) in ((1, 2), (2, 1)) else "NO")