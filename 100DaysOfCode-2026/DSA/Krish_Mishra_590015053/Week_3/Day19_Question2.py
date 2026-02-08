def find_peak(arr):
    start = 0
    end = len(arr) - 1

    while start <= end:
        mid = (start + end) // 2

        left = arr[mid - 1] if mid > 0 else float('-inf')
        right = arr[mid + 1] if mid < len(arr) - 1 else float('-inf')
        if arr[mid] >= left and arr[mid] >= right:
            return mid
        elif left > arr[mid]:
            end = mid - 1
        else:
            start = mid + 1

    return -1 
