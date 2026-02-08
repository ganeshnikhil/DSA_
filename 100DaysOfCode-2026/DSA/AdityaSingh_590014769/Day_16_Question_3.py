def fn(arr):
    if not arr:
        return None  
    max_val = arr[0]
    for num in arr:
        if num > max_val:
            max_val = num
    return max_val
  
arr_input = input("Enter the array elements separated by spaces: ")
arr = list(map(int, arr_input.strip().split()))

result = fn(arr)
print(f"The maximum element in the array is: {result}")
