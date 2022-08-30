def solution():
    n = int(input())
    nums=[int(i) for i in input().split()]
    return((n*(n+1)//2)-sum(nums))

print(solution())
