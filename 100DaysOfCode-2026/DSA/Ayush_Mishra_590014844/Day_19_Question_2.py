def find_peak(arr):
    low, high = 0, len(arr) - 1
    while low < high:
        mid = (low + high) // 2
        if arr[mid] < arr[mid + 1]:
            low = mid + 1
        else:
            high = mid
    return low

arr = list(map(int, input("Enter array: ").split()))
print("Peak index:", find_peak(arr))
