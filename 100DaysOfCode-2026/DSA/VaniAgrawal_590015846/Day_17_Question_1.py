#Implement binary search for finding elements in sorted arrays.
arr = list(map(int,input(" enter list :").split()))
target = int(input("enter number :"))           
low = 0
high = len(arr) - 1
result = -1

while low <= high:
    mid = (low + high) // 2
    if arr[mid] == target:
        result = mid
        break
    elif arr[mid] < target:
        low = mid + 1
    else:
        high = mid - 1

print(result)
