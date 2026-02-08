def first_occurrence(arr, target):
    left, right = 0, len(arr) - 1
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

arr = list(map(int, input("Enter sorted array with duplicates: ").split()))
target = int(input("Enter target element: "))
print("First occurrence index:", first_occurrence(arr, target))
