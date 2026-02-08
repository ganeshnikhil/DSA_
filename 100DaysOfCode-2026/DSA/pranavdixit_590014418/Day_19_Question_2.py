def find_peak(arr):
    low, high = 0, len(arr) - 1
    while low < high:
        mid = (low + high) // 2
        if arr[mid] < arr[mid + 1]:
            low = mid + 1
        else:
            high = mid
    return low

print(find_peak([1, 3, 20, 4, 1, 0]))
print(find_peak([1, 2, 1, 3, 5, 6, 4]))
print(find_peak([10, 20, 15, 2, 23, 90, 67]))
