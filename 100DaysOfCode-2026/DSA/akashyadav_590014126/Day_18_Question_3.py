def sort_color(arr):
    low, mid, high=0 ,0, len(arr) - 1
    while mid <= high:
        if arr[mid] == 0:
            arr[low], arr[mid] = arr[mid], arr[low] # sorting according to there values
            low +=1
            mid +=1
        elif arr[mid] == 1:
            mid +=1
        else:
            arr[mid], arr[high] = arr[high], arr[mid]   # sorting the values according to their value
            high -=1
    return arr  # returning the sorted array

#example
print(sort_color([2, 0, 1, 2, 1, 0, 0]))