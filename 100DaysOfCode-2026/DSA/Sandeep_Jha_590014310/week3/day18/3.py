def sqrroot(n):
    left = 0
    right = n
    for i in range(n):
        mid = (left + right) // 2
        if mid * mid == n:
            return mid
        elif mid * mid < n:
            left = mid + 1
        else:
            right = mid - 1
    return "not a perfect square"

print(sqrroot(int(input("Enter the number: "))))