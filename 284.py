n = int(input())
a = list(map(int, input().split()))
m = int(input())
for _ in range(m):
    i, j = map(int, input().split())
    print(*a[i-1:j])