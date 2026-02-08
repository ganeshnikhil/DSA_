def first_occurrence(arr, target):
    low, high = 0, len(arr) - 1
    result = -1
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

print(first_occurrence([1, 2, 2, 2, 3, 4], 2))
print(first_occurrence([5, 7, 7, 8, 8, 8, 10], 8))
print(first_occurrence([1, 1, 1, 2, 3, 3], 1))
