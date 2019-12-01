n, m = map(int, input().split())

s, ak = 0, 1
for k in range(1, n+1):
    ak = ak * 2 * k % m
    s = (s + ak) % m

print(s)