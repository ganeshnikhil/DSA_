val = int(input("Enter a number: "))
i=0
n =val
soln = 0
last = n-1
while i<=last:
    mid = (i+last)// 2
    if mid*mid==val:
        soln = mid
        break
    elif mid*mid<val:
        soln = mid
        i = mid+1
    else:
        last = mid-1
print(soln)
