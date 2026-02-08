def integer_square_root(n):
    if n < 2:
        return n  

    left, right = 1, n
    result = 0

    while left <= right:
        mid = (left + right) // 2
        if mid * mid == n:  # finding if the middle element is the square root
            return mid  
        elif mid * mid < n:
            result = mid  
            left = mid + 1  # if the square is smaller than left element
        else:
            right = mid - 1 # if the square is smaller than right element

    return result

#example
print(integer_square_root(49))  # Output: 7