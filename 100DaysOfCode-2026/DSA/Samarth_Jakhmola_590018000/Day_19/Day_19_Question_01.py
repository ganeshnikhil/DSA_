def search_rotated_array(array, target):
    beg = 0
    end = len(array) - 1

    while beg <= end:
        mid = (beg + end) // 2
        if array[mid] == target:
            return mid
        elif array[beg] <= array[mid]:
            if array[beg] <= target < array[mid]:
                end = mid - 1
            else:
                beg = mid + 1
        else:
            if array[mid] < target <= array[end]:
                beg = mid + 1
            else:
                end = mid - 1
        
    return -1

try:
    array = list(map(int, input("Enter the elements of the array separated by spaces : ").split()))
    target = int(input("Enter the element you want to search for : "))
    print(search_rotated_array(array, target))
except:
    print("Invalid input. Please enter a valid input.")
