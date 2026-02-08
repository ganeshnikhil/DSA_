# Find any peak element's index using efficient divide-and-conquer approach.
arr = list(map(int, input("Enter the array elements separated by space: ").split()))
n = len(arr)

low = 0
high = n - 1
peak_index = -1

while low <= high:
    mid = (low + high) // 2

    left = (mid == 0 or arr[mid] > arr[mid - 1])
    right = (mid == n - 1 or arr[mid] > arr[mid + 1])

    if left and right:
        peak_index = mid
        break
    elif mid > 0 and arr[mid - 1] > arr[mid]:
        high = mid - 1
    else:
        low = mid + 1

print(peak_index)
