def sort_colours(array):
    low, mid, high = 0, 0, len(array) -1 

    while mid <= high:
        if array[mid] == 0:
            array[low], array[mid] = array[mid], array[low]
            low += 1
            mid += 1
        elif array[mid] == 1:
            mid += 1
        else:
            array[mid], array[high] = array[high], array[mid]
            high -= 1
    
    return array

try:
    array = list(map(int, input("Enter the elements of the array separated by spaces : ").split()))
    print(sort_colours(array))
except:
    print("Invalid input. Please enter a valid input.")
