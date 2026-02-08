def find_first_occurrence(arr, target):
    low = 0
    high = len(arr) - 1
    result = -1  # Default if not found

    while low <= high:
        mid = (low + high) // 2

        if arr[mid] == target:
            result = mid
            high = mid - 1  
        elif arr[mid] < target:
            low = mid + 1
        else:
            high = mid - 1

    return result

user_input = input("Enter sorted integers separated by spaces: ")
arr = list(map(int, user_input.split()))

target = int(input("Enter the target element: "))
index = find_first_occurrence(arr, target)

if index != -1:
    print("First occurrence of", target, "is at index:", index)
else:
    print("Element not found in the array.")
