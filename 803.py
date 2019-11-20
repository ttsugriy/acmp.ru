a, b, k = map(int, input().split())

a %= b

for _ in range(k):
    while a and a < b:
        a *= 10
    div, rem = divmod(a, b)
    a = rem

print(div)    