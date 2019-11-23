import sys

t1, t2, s1, s2, s = map(int, input().split())
v1, v2 = s1 / t1, s2 / t2

time, distance = 0, 0
while True:
    if distance + s1 >= s:
        print(time + (s - distance) / v1)
        sys.exit(0)
    time, distance = time + t1 + t2, distance + s1 - s2

    if distance <= 0:
        print("NO")
        sys.exit(0)