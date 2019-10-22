nums = list(map(int, input().split()))

print(sum(a * b for a, b in zip(sorted(nums[:3]), sorted(nums[3:]))))