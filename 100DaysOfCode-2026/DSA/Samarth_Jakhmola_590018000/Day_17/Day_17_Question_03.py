def square_root(num):
    if num < 0:
        return -1
    
    beg = 0
    end = num
    result = -1

    while beg <= end:
        mid = (beg + end) // 2
        if mid * mid == num:
            return mid
        elif mid * mid < num:
            result = mid
            beg = mid + 1
        else:
            end = mid - 1

    return result

try:
    num = int(input("Enter a postive number : "))
    print(square_root(num))
except:
    print("Invalid input.")
