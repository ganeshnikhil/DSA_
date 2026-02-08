def find_maximum(arr):
    max_val = arr[0]
    
    for num in arr:
        if num > max_val:
            max_val = num  
    return max_val

user_input = input("Enter integers separated by spaces: ")
arr = list(map(int, user_input.split()))

maximum = find_maximum(arr)
print("The maximum element in the array is:", maximum)
