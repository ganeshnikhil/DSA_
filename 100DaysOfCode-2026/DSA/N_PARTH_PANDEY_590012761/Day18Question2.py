def insertion_sort(arr):
    n = len(arr)
    for i in range(1, n):
        key = arr[i]
        j = i - 1
        while j >= 0 and arr[j] > key:
            arr[j + 1] = arr[j]
            j -= 1
        arr[j + 1] = key
    return arr

input_arr = [12, 11, 13, 5, 6]
sorted_arr = insertion_sort(input_arr.copy())
print("Input:", input_arr)
print("Output:", sorted_arr)