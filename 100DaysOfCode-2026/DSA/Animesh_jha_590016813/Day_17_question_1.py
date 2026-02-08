def binary_search(arr, target):
    left = 0
    right = len(arr) - 1

    while left <= right:
        mid = left + (right - left) // 2 

        if arr[mid] == target:
            return mid 
        elif arr[mid] < target:
            left = mid + 1  
        else:
            right = mid - 1 

    return -1 

array = [10, 20, 30, 40, 50]
target = 30
result = binary_search(array, target)
print(result)
