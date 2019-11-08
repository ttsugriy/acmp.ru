n, count = input().rjust(4, "0"), 0

while True:
    desc = "".join(sorted(n, reverse=True)).rjust(4, "0")
    asc = "".join(reversed(desc)).rjust(4, "0")
    next_n = str(int(desc) - int(asc)).rjust(4, "0")
    if next_n == n:
        break
    n = next_n
    count += 1

print(n)
print(count)