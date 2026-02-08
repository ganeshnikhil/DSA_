def fn(arr, target):
    for i in range(len(arr)):
        if arr[i] == target:
            return i  
    return -1  

arr_input = input("Enter the array elements separated by spaces: ")
arr = list(map(int, arr_input.strip().split()))

target = int(input("Enter the target element to search for: "))

result = fn(arr, target)
if result != -1:
    print(f"Target found at index: {result}")
else:
    print("Target not found in the array.")
