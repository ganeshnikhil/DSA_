# Bubble Sorting algorithm 

My_Array = list(map(int,input("Enter the element of array(Give the space between them): ").strip().split()))

def Bubble_sort(arr):
    n = len(arr)
    swapped = False
    for i in range(n):
        for j in range(0,n-i-1):
            if arr[j] > arr[j+1]:
                arr[j],arr[j+1] = arr[j+1],arr[j] # swapping the elements
                swapped = True
            if not swapped:
                break
    return arr

result = Bubble_sort(My_Array)

print(result)