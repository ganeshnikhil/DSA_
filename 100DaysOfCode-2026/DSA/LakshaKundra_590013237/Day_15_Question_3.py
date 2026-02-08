def bubble_sort(arr):
    for i in range(len(arr)):
        for j in range(0, len(arr) - i - 1):
            if arr[j] > arr[j + 1]:
                arr[j], arr[j + 1] = arr[j + 1], arr[j]

arr1 = [5, 2, 8, 1, 9]
bubble_sort(arr1)
print(arr1)

arr2 = [3, 7, 4, 1, 6, 2]
bubble_sort(arr2)
print(arr2)

arr3 = [64, 34, 25, 12, 22, 11, 90]
bubble_sort(arr3)
print(arr3)
