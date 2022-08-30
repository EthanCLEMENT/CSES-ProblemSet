def solution():
   n=int(input())
   ans=0
   arr=[int(i) for i in input().split()]
   for i in range(1,n):
       if arr[i]<arr[i-1]:
           ans+=(arr[i-1]-arr[i])
           arr[i]=arr[i-1]
   return ans
print(solution())
