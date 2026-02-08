def integer_square_root(n):
    if n < 2:
        return n
        
    left, right = 1, n // 2
    result = 0
    
    while left <= right:
        mid = (left + right) // 2
        mid_squared = mid * mid
        
        if mid_squared == n:
            return mid
        elif mid_squared < n:
            result = mid  # store last valid mid
            left = mid + 1
        else:
            right = mid - 1
            
    return result