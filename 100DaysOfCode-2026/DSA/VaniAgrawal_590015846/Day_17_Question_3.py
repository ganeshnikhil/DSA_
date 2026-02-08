# Calculate integer square root using binary search on the solution space.
n = int(input("enter number :"))

low = 0
high = n
ans = -1

while low <= high:
    mid = (low + high) // 2
    if mid * mid == n:
        ans = mid
        break
    elif mid * mid < n:
        ans = mid
        low = mid + 1
    else:
        high = mid - 1

print(ans)
