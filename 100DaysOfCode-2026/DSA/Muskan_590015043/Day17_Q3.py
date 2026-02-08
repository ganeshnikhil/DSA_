def integer_square_root(n):
    if n < 2:
        return n  # 0 or 1

    left = 0
    right = n
    result = 0

    while left <= right:
        mid = (left + right) // 2
        square = mid * mid

        if square == n:
            return mid  # Exact square root found
        elif square < n:
            result = mid  # Store potential result
            left = mid + 1
        else:
            right = mid - 1

    return result  # Largest integer whose square <= n

# Input
n = int(input("Enter a positive number: "))
print(integer_square_root(n))
