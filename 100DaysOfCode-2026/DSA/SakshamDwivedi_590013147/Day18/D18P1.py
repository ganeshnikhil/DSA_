#Selection Sort
def selection_sort(arr):
    for i in range(len(arr) - 1):
        min_ind = i
        for j in range(i+1, len(arr)):
            if(arr[min_ind] > arr[j]):
                min_ind = j
        arr[i], arr[min_ind] = arr[min_ind], arr[i]
    return arr

#Fixed Input
print(selection_sort([3,2,6,1,7]))

#Custom Input
arr = list(int(x) for x in input("Enter the array : ").split())
print(selection_sort(arr))
