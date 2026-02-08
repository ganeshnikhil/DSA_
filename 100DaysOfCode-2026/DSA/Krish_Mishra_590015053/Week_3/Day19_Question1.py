def search_in_rotated_array(arr, target):
    start = 0
    end = len(arr) - 1

    while start <= end:
        mid = (start + end) // 2

        if arr[mid] == target:
            return mid
        if arr[start] <= arr[mid]:
            if arr[start] <= target < arr[mid]: f
                end = mid - 1
            else:  
                start = mid + 1
        else:
            # Right half is sorted
            if arr[mid] < target <= arr[end]: 
                start = mid + 1
            else:
                end = mid - 1
    return -1
