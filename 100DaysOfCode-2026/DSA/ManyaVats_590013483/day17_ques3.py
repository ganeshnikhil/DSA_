def integer_square_root(n):
    if n < 2:
        return n  

    left = 1
    right = n // 2
    result = 0

    while left <= right:
        mid = (left + right) // 2
        if mid * mid == n:
            return mid
        elif mid * mid < n:
            result = mid        
            left = mid + 1      
        else:
            right = mid - 1    
    return result
