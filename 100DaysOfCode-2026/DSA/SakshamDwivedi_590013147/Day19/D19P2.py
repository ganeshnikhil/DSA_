#Solution Function
def peak(arr):
    low = 0
    high = len(arr) - 1
    while low <= high:
        mid = low + (high - low) // 2
        if mid == 0:
            if arr[mid] > arr[mid + 1]:
                return arr[mid]
            else:
                low = mid + 1
                continue
            
        if mid == len(arr) - 1:
            if arr[mid] > arr[mid - 1]:
                return arr[mid]
            else:
                high = mid - 1
                continue
            
        if arr[mid] > arr[mid + 1] and arr[mid] > arr[mid - 1]:
            return arr[mid]

        if arr[mid] < arr[mid - 1]:
            high = mid - 1
        else:
            low = mid + 1

#Fixed Input
print(peak([3, 2, 1, 0, 1, 2, 4]))

#Custom Input
arr = list(int(x) for x in input("Enter the array : ").split())
print(peak(arr))
