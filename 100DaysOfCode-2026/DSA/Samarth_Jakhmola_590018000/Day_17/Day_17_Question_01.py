def binary_search(array, target):
    beg = 0
    end = len(array) - 1

    while beg <= end:
        mid = (beg + end) // 2
        if array[mid] == target:
            return mid
        elif target > array[mid]:
            beg = mid + 1
        else:
            end = mid - 1
            
    return -1

try:
    array = list(map(int, input("Enter the elements of the array : ").split()))
    target = int(input("Enter the element you want to search for : "))
    print(binary_search(array, target))
except: 
    print("Invalid input. Plaese enter a valid input.")
