arr =[]
n = int(input("Enter the number of elements in an array: "))
for i in range(n):
    val = int(input(f"Enter the {i} element: "))
    arr.append(val)
target = int(input("Target: "))
low = 0
high = len(arr) - 1
while low <= high:
    mid = (low+high)//2
    if arr[mid] == target :
        print(mid)
        break
    if arr[low] <= arr[mid]:
        if arr[low] <= target < arr[mid]:
            high = mid -1
        else:
            low = mid + 1
    else:
        if arr[mid] < target <= arr[high]:
            low = mid + 1
        else:
            high = mid -1
else:
    print(-1)
