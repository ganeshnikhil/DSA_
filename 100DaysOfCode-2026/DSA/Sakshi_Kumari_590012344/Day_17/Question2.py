Your task: Find the first occurrence of a target element in sorted array with duplicates.

def first_occurrence(arr, target):
    if not isinstance(arr, list) or len(arr) == 0:
        return -1
    left = 0
    right = len(arr) - 1
    result = -1

    while left <= right:
        mid = left + (right - left) // 2
        if arr[mid] == target:
            result = mid
            right = mid - 1
        elif arr[mid] < target:
            left = mid + 1
        else:
            right = mid - 1
    return result
