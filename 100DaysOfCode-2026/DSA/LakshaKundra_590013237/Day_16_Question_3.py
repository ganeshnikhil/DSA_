def find_maximum(arr):
    if not arr:
        return None
    max_val = arr[0]
    for num in arr:
        if num > max_val:
            max_val = num
    return max_val

print(find_maximum([3, 7, 1, 9, 4, 6]))          # Output: 9
print(find_maximum([-5, -2, -8, -1, -3]))        # Output: -1
print(find_maximum([100, 250, 75, 300, 150]))    # Output: 300
