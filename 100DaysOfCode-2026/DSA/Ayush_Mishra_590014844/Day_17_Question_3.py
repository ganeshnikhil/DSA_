def integer_sqrt(n):
    if n < 2:
        return n
    left, right = 1, n
    ans = 0
    while left <= right:
        mid = (left + right) // 2
        if mid * mid <= n:
            ans = mid
            left = mid + 1
        else:
            right = mid - 1
    return ans

n = int(input("Enter a positive number: "))
print("Integer square root:", integer_sqrt(n))
