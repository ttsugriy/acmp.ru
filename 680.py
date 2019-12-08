n = int(input())

white, blue, orange = 1, 1, 1
for _ in range(2, n + 1):
    white, blue, orange = blue + orange, white + orange, white + blue

print(white + blue + orange)