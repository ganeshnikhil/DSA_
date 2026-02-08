def find_maximum(arr):
    if not arr:
        return None  # Handle empty array
    max_val = arr[0]
    for element in arr[1:]:
        if element > max_val:
            max_val = element
    return max_val
