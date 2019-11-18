num = input()
print(max(
    num[:i] + num[i+1:j] + num[j+1:]
    for i in range(len(num))
    for j in range(i+1, len(num))
))