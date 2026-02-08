def insertion_sort(array):
    for i in range(1, len(array)):
        key = array[i]
        j = i - 1

        while j >= 0 and array[j] > key:
            array[j + 1] = array[j]
            j -= 1
        
        array[j + 1] = key
        
    return array

try:
    array = list(map(int, input("Enter the elements of the array separated by spaces : ").split()))
    print(insertion_sort(array))
except:
    print("Invalid input. Please enter a valid input.")
