def integer_square_root():
    num = int(input("Enter a positive number: "))

    if num < 0:
        print("Square root not defined for negative numbers.")
        return

    if num == 0 or num == 1:
        print(f"Square root is: {num}")
        return

    left = 0
    right = num
    result = 0

    while left <= right:
        mid = (left + right) // 2
        square = mid * mid

        if square == num:
            print(f"Square root is: {mid}")
            return
        elif square < num:
            result = mid 
            left = mid + 1
        else:
            right = mid - 1
    print(f"Square root is: {result}")
