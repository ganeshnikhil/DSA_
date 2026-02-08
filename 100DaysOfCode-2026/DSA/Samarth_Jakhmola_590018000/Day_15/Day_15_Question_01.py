def array_sort(array):
    if len(array) == 0:
        return -1
    else:
        array.sort()
        return array
    
f = 0
while f == 0:
    try:
        array = list(map(int, input("Please enter the elements of the array you want to sort, separated by spaces : ").split()))
        print("Invalid input." if array_sort(array) == -1 else array_sort(array))
        f = 1
    except:
        print("Invalid input. Please provide a valid input.")
