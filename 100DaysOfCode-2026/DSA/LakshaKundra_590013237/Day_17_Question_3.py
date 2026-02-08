def integer_sqrt(n):
    left = 0
    right = n
    ans = 0
    while left <= right:
        mid = (left + right) // 2
        if mid * mid <= n:
            ans = mid
            left = mid + 1
        else:
            right = mid - 1
    return ans

print(integer_sqrt(16))  # Output: 4
print(integer_sqrt(27))  # Output: 5
print(integer_sqrt(49))  # Output: 7
