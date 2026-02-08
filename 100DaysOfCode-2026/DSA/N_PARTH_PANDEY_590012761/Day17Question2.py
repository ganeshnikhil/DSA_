def first_occurrence(arr, target):
    left, right = 0, len(arr) - 1
    first_occurrence = -1 

    while left <= right:
        mid = (left + right) // 2
        if arr[mid] == target:
            first_occurrence = mid  
            right = mid - 1 
        elif arr[mid] < target:
            left = mid + 1
        else:
            right = mid - 1

    return first_occurrence

arr = [1, 2, 2, 2, 3, 4]
target = 2
print(first_occurrence(arr, target))  