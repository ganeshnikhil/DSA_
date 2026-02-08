#Solution Function
def binary_search(arr, target):
    start = 0
    end = len(arr) - 1
    while start <= end:
        mid = start + (end - start) // 2
        if arr[mid] > target:
            end = mid - 1
        elif arr[mid] < target:
            start = mid + 1
        else:
            return mid
    return -1

#Fixed Input
array = [1, 3, 5, 7, 9, 11]
tar = 7
print(binary_search(array, tar))

#Custom Input
array = list(int(x) for x in input("Enter an array (In sorted order) : ").split())
tar = int(input("Enter the target value : "))
print(binary_search(array, tar))
