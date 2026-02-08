def bubble_sort(arr):
    n = len(arr)    # calculates the number of elements

    for i in range(n):
        swapped = False  

        for j in range(0, n - i - 1):
            if arr[j] > arr[j + 1]: # checking for big element 

                arr[j], arr[j + 1] = arr[j + 1], arr[j] #   swapping the adjacent elements according to their value
                swapped = True

        if not swapped:
            break
    return arr
#example
print(bubble_sort([32, 73, 41, 11, 61, 12]))      # ➤ [11, 12, 32, 41, 61, 73]