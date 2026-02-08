def linear_search(arr, target):
    for i in range(len(arr)):
        if arr[i] == target:
            return i
    return -1

# Input from user
arr = list(map(int, input("Enter array elements separated by space: ").split()))
target = int(input("Enter the target element: "))
result = linear_search(arr, target)
print(f"Element found at index: {result}" if result != -1 else "Element not found.")
