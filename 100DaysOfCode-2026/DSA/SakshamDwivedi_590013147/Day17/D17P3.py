#Solution Function
def square_root(num):
    if(num < 0):
        return "Square root is imaginary"
    if(num == 0 or num == 1):
        return num
    
    start = 0
    end = num
    sqroot = -1
    while start <= end:
        mid = start + (end - start) // 2
        if(mid*mid > num):
            end = mid - 1
        elif(mid*mid < num):
            sqroot = mid
            start = mid + 1
        else:
            return mid
    return sqroot

#Fixed Input
print(square_root(37))

#Custom Input
number = int(input("Enter the number : "))
print(square_root(number))
