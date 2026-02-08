def find_peak_element(arr):
    n = len(arr)
    low = 0
    high = n - 1

    while low <= high:
        mid = (low + high) // 2

        # Check if mid is a peak
        if (mid == 0 or arr[mid] >= arr[mid - 1]) and (mid == n - 1 or arr[mid] >= arr[mid + 1]):
            return mid

        elif mid > 0 and arr[mid - 1] > arr[mid]:
            high = mid - 1

        else:
            low = mid + 1

    return -1  

arr = list(map(int, input("Enter array elements (space-separated): ").split()))
index = find_peak_element(arr)
print(f"Peak found at index {index}")
