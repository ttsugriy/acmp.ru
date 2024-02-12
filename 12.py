n = int(input())


def vec_product(ax: int, ay: int, bx: int, by: int) -> int:
    return ax * by - ay * bx


def area_of(ax: int, ay: int, bx: int, by: int, cx: int, cy: int) -> int:
    return abs(vec_product(ax - bx, ay - by, cx - bx, cy - by))


hits = 0

for i in range(n):
    x, y, x1, y1, x2, y2, x3, y3, x4, y4 = map(int, input().split())

    hits += int(
        (area_of(x4, y4, x1, y1, x, y) +
         area_of(x1, y1, x2, y2, x, y) +
         area_of(x2, y2, x3, y3, x, y) +
         area_of(x3, y3, x4, y4, x, y)) == 2 * area_of(x2, y2, x3, y3, x4, y4)
    )

print(hits)
