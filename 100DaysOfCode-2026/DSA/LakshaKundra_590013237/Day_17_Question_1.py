def binary_search(arr, target):
    left = 0
    right = len(arr) - 1
    while left <= right:
        mid = (left + right) // 2
        if arr[mid] == target:
            return mid
        elif arr[mid] < target:
            left = mid + 1
        else:
            right = mid - 1
    return -1

print(binary_search([1, 3, 5, 7, 9, 11], 7))       # Output: 3
print(binary_search([2, 4, 6, 8, 10, 12, 14], 5))  # Output: -1
print(binary_search([10, 20, 30, 40, 50], 30))     # Output: 2
