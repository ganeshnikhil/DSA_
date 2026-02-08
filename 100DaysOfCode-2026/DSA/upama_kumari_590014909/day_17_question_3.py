def integer_square_root(n):
    if n < 2:
        return n  

    left = 1
    right = n
    result = 1

    while left <= right:
        mid = left + (right - left) // 2

        if mid * mid == n:
            return mid
        elif mid * mid < n:
            result = mid 
            left = mid + 1
        else:
            right = mid - 1

    return result

n = 49
print(integer_square_root(n))
