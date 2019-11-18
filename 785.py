a, b = map(int, input().split())

def is_automorph(x: int) -> bool:
    sq = x * x
    while x > 0:
        if x % 10 != sq % 10:
            return False
        x, sq = x // 10, sq // 10
    return True

print(" ".join(
    str(x) for x in range(a, b+1) if is_automorph(x)
))