def sort_colors(arr):
    low = mid = 0
    high = len(arr) - 1
    while mid <= high:
        if arr[mid] == 0:
            arr[low], arr[mid] = arr[mid], arr[low]
            low += 1
            mid += 1
        elif arr[mid] == 1:
            mid += 1
        else:
            arr[mid], arr[high] = arr[high], arr[mid]
            high -= 1
    return arr

print(sort_colors([2, 0, 2, 1, 1, 0]))
print(sort_colors([2, 0, 1, 2, 1, 0, 0]))
print(sort_colors([1, 2, 0, 1, 2, 0]))
