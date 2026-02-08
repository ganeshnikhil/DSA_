def peak_element(array):
    beg = 0
    end = len(array) - 1
    while beg < end:
        mid = (beg + end) // 2
        if array[mid] < array[mid + 1]:
            beg = mid + 1
        else: 
            end = mid

    return beg

try:
    array = list(map(int, input("Enter the elements of the array separated by spaces : ").split()))
    print(peak_element(array))
except:
    print("Invalid input. Please enter a valid input.")
