n = int(input())
prev = float(input())
mn, mx = 30.0, 4000.0
for _ in range(n-1):
    freq, dir = input().split()
    freq = float(freq)
    mid = (freq + prev) / 2
    if freq > prev:
        if dir == "closer":
            mn = max(mn, mid)
        else:
            mx = min(mx, mid)
    elif freq < prev:
        if dir == "closer":
            mx = min(mx, mid)
        else:
            mn = max(mn, mid)
    prev = freq

print(str(max(30.0, mn)) + " " + str(min(mx, 4000.0)))