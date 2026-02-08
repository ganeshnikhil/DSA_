def find_peak(arr):
    low, high = 0, len(arr) - 1
    while low <= high:
        mid = (low + high) // 2
        left = arr[mid - 1] if mid > 0 else float('-inf')
        right = arr[mid + 1] if mid < len(arr) - 1 else float('-inf')
        if arr[mid] >= left and arr[mid] >= right:
            return mid
        elif arr[mid] < right:
            low = mid + 1
        else:
            high = mid - 1
    return -1

print(find_peak([1, 3, 20, 4, 1, 0]))
print(find_peak([1, 2, 1, 3, 5, 6, 4]))
print(find_peak([10, 20, 15, 2, 23, 90, 67]))
      
