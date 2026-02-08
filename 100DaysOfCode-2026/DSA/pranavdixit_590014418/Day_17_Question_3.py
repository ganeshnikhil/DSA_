def integer_square_root(n):
    if n < 2:
        return n
    low, high = 1, n
    result = 0
    while low <= high:
        mid = (low + high) // 2
        if mid * mid == n:
            return mid
        elif mid * mid < n:
            result = mid
            low = mid + 1
        else:
            high = mid - 1
    return result

print(integer_square_root(16))
print(integer_square_root(27))
print(integer_square_root(49))
