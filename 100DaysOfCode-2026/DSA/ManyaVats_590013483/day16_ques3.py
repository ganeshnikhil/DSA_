def find_maximum(arr):
    if not arr:
        return None 
    max_val = arr[0]
    for num in arr:
        if num > max_val:
            max_val = num
    return max_val

# Example
arr = [3, 7, 1, 9, 4, 6]
print(find_maximum(arr))  
