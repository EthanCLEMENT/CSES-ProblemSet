def solution():

    nums = []
    n = int(input())
    for j in range(n-1):
        num = int(input())
        nums.append(num)
    count = 1
    nums.sort()
    for i in nums:
        if i == count:
            count += 1
        else:
            return int(count)
print(solution())
