#Soltion Function
def bubble_sort(arr):
    for i in range(len(arr) - 1):
        for j in range(len(arr) - i - 1):
            if(arr[j] > arr[j+1]):
                arr[j], arr[j+1] = arr[j+1], arr[j]
    return arr

#Fixed Input
print(bubble_sort([5, 3, 1, 7, 9, 2, 6]))

#Custom Input
arr = list(int(x) for x in input("Enter the array : ").split())
print(bubble_sort(arr))
