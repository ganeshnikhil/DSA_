def selection_sort(arr):
    n = len(arr)
    for i in range(n):
       min_idx = i
    for j in range(i + 1, n):
            if arr[j] < arr[min_idx]:
                min_idx = j
            arr[i], arr[min_idx] = arr[min_idx], arr[i]
    return arr
input_arr = [29, 10, 14, 37, 13]
sorted_arr = selection_sort(input_arr.copy())  
print("Input:", input_arr)
print("Output:", sorted_arr)