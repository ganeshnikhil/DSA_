def first_occurrence(arr, target):
    left = 0
    right = len(arr) - 1
    result = -1
    while left <= right:
        mid = (left + right) // 2
        if arr[mid] == target:
            result = mid
            right = mid - 1
        elif arr[mid] < target:
            left = mid + 1
        else:
            right = mid - 1
    return result

print(first_occurrence([1, 2, 2, 2, 3, 4], 2))       # Output: 1
print(first_occurrence([5, 7, 7, 8, 8, 8, 10], 8))   # Output: 3
print(first_occurrence([1, 1, 1, 2, 3, 3], 1))       # Output: 0
