def integer_sqrt(num):
    if num < 2:
        return num  
    
    left, right = 1, num
    while left <= right:
        mid = (left + right) // 2
        if mid * mid == num:
            return mid
        elif mid * mid < num:
            left = mid + 1
        else:
            right = mid - 1
    return right  


num = int(input("Enter any positive square number: "))
print(integer_sqrt(num))  