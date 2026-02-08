def integer_square_root(n):
    if n < 0:
        return None  # Square root not defined for negative numbers

    low = 0
    high = n
    ans = 0

    while low <= high:
        mid = (low + high) // 2
        if mid * mid == n:
            return mid  # Exact square root
        elif mid * mid < n:
            ans = mid   # Potential answer
            low = mid + 1
        else:
            high = mid - 1

    return ans

# --- User Input ---
try:
    num = int(input("Enter a positive number: "))
    if num < 0:
        print("⚠️ Please enter a non-negative number.")
    else:
        result = integer_square_root(num)
        print(f"The integer square root of {num} is: {result}")
except ValueError:
    print("❌ Invalid input. Please enter an integer.")
