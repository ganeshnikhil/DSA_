#Insertion sort
def insertion_sort(arr):
    for i in range(1, len(arr)):
        sw_key = arr[i]
        j = i-1
        while j >= 0 and arr[j] > sw_key:
            arr[j+1] = arr[j]
            j -= 1
        arr[j+1] = sw_key
    return arr

#Fixed Input
print(insertion_sort([3, 2, 6, 1, 7]))

#Custom Input
arr = list(int(x) for x in input("Enter the array : ").split())
print(insertion_sort(arr))
