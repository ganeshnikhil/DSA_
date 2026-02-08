#Solution Function
def rotated_binary(arr, target):
    low = 0
    high = len(arr) - 1
    while low <= high:
        mid = low + (high - low) // 2       
        if(arr[mid] == target):
            return mid

        if arr[low] <= arr[mid]:
            if arr[low] <= target < arr[mid]:
                high = mid - 1
            else:
                low = mid + 1               
        else:
            if arr[mid] < target <= arr[high]:
                low = mid + 1
            else:
                high = mid - 1
                
    return -1

#Fixed Input
print(rotated_binary([4, 5, 6, 7, 0, 1, 2], 0))

#Custom Input
arr = list(int(x) for x in input("Enter the array : ").split())
target = int(input("Enter the target value to find : "))
print(rotated_binary(arr, target))
