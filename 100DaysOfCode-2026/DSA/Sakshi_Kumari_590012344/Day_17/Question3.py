Your task: Calculate integer square root using binary search on the solution space
def integer_sqrt(n):
    if not isinstance(n, int) or n < 0:
        return -1
    if n < 2:
        return n
    left = 1
    right = n // 2
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
