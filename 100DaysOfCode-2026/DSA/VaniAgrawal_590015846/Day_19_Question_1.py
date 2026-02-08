#Implement efficient search in rotated sorted arrays using binary search principles.
arr = list(map(int, input("Enter the array elements separated by space: ").split()))
target = int(input("Enter the target value to search: "))

low = 0
high = len(arr) - 1
index = -1

while low <= high:
    mid = (low + high) // 2

    if arr[mid] == target:
        index = mid
        break

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

print(index)
