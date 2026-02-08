def selection_sort(arr):
    for i in range(len(arr)):
        min_index = i
        for j in range(i + 1, len(arr)):
            if arr[j] < arr[min_index]:
                min_index = j
       
        arr[i], arr[min_index] = arr[min_index], arr[i]

numbers = [29, 10, 14, 37, 13]
selection_sort(numbers)
print(numbers)
