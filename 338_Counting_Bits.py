n = int(input())
rem = []

for i in range(n):
    x = i
    cnt = 0
    while x > 0:
        tmp = x % 2
        if tmp == 1: 
            cnt+=1
        x = x // 2

    rem.append(cnt)
        
    
print(rem)


"""
shorted version
return [bin(i).count('1') for i in range(n+1)]
"""
    