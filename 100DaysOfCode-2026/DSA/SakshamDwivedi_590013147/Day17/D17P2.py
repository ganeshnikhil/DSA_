#Solution Function
def first_occ_bin(arr, target):
    start = 0
    end = len(arr) - 1
    current_index = len(arr)
    while start <= end:
        mid = start + (end - start) // 2
        if arr[mid] > target:
            end = mid - 1
        elif arr[mid] < target:
            start = mid + 1
        elif ((arr[mid] == target) and (current_index > mid)):
            current_index = mid
            end = mid - 1
    if(current_index < len(arr)):
        return current_index
    else:
        return -1

#Fixed Input
array = [1,1,1,2,3,3]
tar = 1
print(first_occ_bin(array, tar))

#Custom Input
array = list(int(x) for x in input("Enter an array : ").split())
tar = int(input("Enter the target value : "))
print(first_occ_bin(array, tar))
