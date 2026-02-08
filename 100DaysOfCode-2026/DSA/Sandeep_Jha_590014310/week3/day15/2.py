def find_peak(arr):
    def binary_search(low, high):
        while low <= high:
            mid = (low + high) // 2
            # Check if mid is a peak
            if (mid == 0 or arr[mid] >= arr[mid - 1]) and (mid == len(arr) - 1 or arr[mid] >= arr[mid + 1]):
                return mid
            # If left neighbor is greater, search left
            elif mid > 0 and arr[mid - 1] > arr[mid]:
                high = mid - 1
            # If right neighbor is greater, search right
            else:
                low = mid + 1
        return -1  # Should not reach here if input is valid

    return binary_search(0, len(arr) - 1)

print(find_peak(list(map(int,input("enter the array: ").replace(","," ").split()))))