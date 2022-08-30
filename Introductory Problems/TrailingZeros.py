def solution():
    n=int(input())
    ans=0
    m=5
    while(n/m>0):
        ans+=n//m
        m*=5
    print(ans)
    
solution()
