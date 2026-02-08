def binary_search(arr, target):
    left = 0
    right = len(arr) - 1

    while left <= right:
        mid = (left + right) // 2  # Calculate middle index
        if arr[mid] == target:
            return mid 
        elif arr[mid] < target:
            left = mid + 1  # Search in right half
        else:
            right = mid - 1  # Search in left half
    return -1  # Element not found

user_input = input("Enter sorted integers separated by spaces: ")
arr = list(map(int, user_input.split()))
target = int(input("Enter the number to search for: "))

result = binary_search(arr, target)

if result != -1:
    print(f"Target {target} found at index {result}")
else:
    print(f"-1.")
