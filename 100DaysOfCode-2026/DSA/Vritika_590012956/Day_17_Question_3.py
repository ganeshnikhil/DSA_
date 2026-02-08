def integer_square_root(n):
    if n < 2:
        return n  # sqrt(0) = 0, sqrt(1) = 1

    low = 0
    high = n
    result = 0

    while low <= high:
        mid = (low + high) // 2
        if mid * mid <= n:
            result = mid 
            low = mid + 1
        else:
            high = mid - 1

    return result

num = int(input("Enter a positive integer: "))
print("Integer square root:", integer_square_root(num))
