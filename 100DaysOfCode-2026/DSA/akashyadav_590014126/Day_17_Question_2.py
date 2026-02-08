def first_occurrence(arr, target):
    left, right = 0, len(arr) - 1
    result = -1  

    while left <= right:
        mid = (left + right) // 2

        if arr[mid] == target:  # comparing each element with the target element
            result = mid
            right = mid - 1 
        elif arr[mid] < target:
            left = mid + 1    # to move to the left of array
        else:
            right = mid - 1      # to move to the left of array

    return result

#example
print(first_occurrence([5, 7, 7, 8, 8, 8, 10], 10))     # Output: 6