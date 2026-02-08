def merge_sorted_arrays(array1, array2):
    merged_array = []
    i = j = 0
    while i < len(array1) and j < len(array2):
        if array1[i] <= array2[j]:
            merged_array.append(array1[i])
            i += 1
        else:
            merged_array.append(array2[j])
            j += 1

    while i < len(array1):
        merged_array.append(array1[i])
        i += 1

    while j < len(array2):
        merged_array.append(array2[j])
        j += 1

    return merged_array

try:
    Array1 = list(map(int, input("Enter the elements of array 1 separated by spaces : ").split()))
    Array2 = list(map(int, input("Enter the elements of array 2 separated by spaces : ").split()))
    print(merge_sorted_arrays(Array1, Array2))
except:
    print("Invalid input. Please enter a valid input.")
