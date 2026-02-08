def selection_sort(array):
    for i in range(len(array)):
        minimum_index = i
        for j in range(i + 1, len(array)):
            if array[j] < array[minimum_index]:
                  minimum_index = j
        
        array[i], array[minimum_index] = array[minimum_index], array[i]

    return array

try:
    array = list(map(int, input("Enter the elements of the array separated by spaces : ").split()))
    print(selection_sort(array))
except:
    print("Invalid input. Please enter a valid input.")
