def solution():
    n = input()
    curr = 1
    mx = 0
    m = n[::-1]
    mx2 = 1
    for j in range(len(m)-1):
        if m[j] == m[j+1]:
           mx2 +=1
        else:
            break
    for i in range(len(n)-1):
        if n[i] == n[i+1]:
            curr+=1
        else:
            if curr > mx:
                mx = curr
            curr = 1
    if mx == 0:
        return curr
    elif mx2 > mx:
        return mx2
    else:
        return mx

print(solution())
 

