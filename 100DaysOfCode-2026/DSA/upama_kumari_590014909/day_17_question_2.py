def first_occurrence(arr, target):
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

array = [5, 7, 7, 8, 8, 8, 10]
target = 8
result = first_occurrence(array, target)
print(result)
