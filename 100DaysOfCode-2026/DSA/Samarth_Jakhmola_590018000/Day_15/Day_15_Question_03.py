def bubble_sort(array):
    if len(array) == 0:
        return -1 
    else:
        for i in range(len(array)):
            for j in range(0, len(array) - i - 1):
                if array[j] > array[j + 1]:
                    array[j], array[j + 1] = array[j + 1], array[j]

    return array

f = 0
while f == 0:
    try:
        array = list(map(int, input("Please enter the elements of the array you want to sort, separated by spaces : ").split()))
        print("Invalid input." if bubble_sort(array) == -1 else bubble_sort(array))
        f = 1
    except:
        print("Invalid input. Please provide a valid input.")
