def find_maximum(arr):
    if not arr:
        return None  # Edge case: empty array
    max_val = arr[0]
    for value in arr[1:]:
        if value > max_val:
            max_val = value
    return max_val

# User input
arr = list(map(int, input("Enter array elements separated by spaces: ").split()))
result = find_maximum(arr)
print("Output:", result)