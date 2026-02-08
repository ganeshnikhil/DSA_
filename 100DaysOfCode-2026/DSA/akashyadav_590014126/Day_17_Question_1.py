def binary_search(arr, target):
    left, right = 0, len(arr) - 1
    
    while left <= right:
        mid = (left + right) // 2
        
        if arr[mid] == target:  # if target element is in the middle of series
            return mid
        elif arr[mid] < target: # finding the target element in left of array elements
            left = mid + 1
        else:
            right = mid - 1 # # finding the target element in right of array elements
    
    return -1  # if target element is not present

#example
print(binary_search([10, 20, 30, 40, 50], 30))      # Output: 2