def bubble_sort(arr):
    n = len(arr)
    for i in range(n):
        
        swapped = False
        for j in range(0, n - i - 1):
            if arr[j] > arr[j + 1]:
                
                arr[j], arr[j + 1] = arr[j + 1], arr[j]
                swapped = True
        
        if not swapped:
            break
    return arr


input_array = [5, 2, 8, 1, 9]
sorted_array = bubble_sort(input_array)
print(sorted_array)