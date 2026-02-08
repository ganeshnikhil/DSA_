def bin_sear(arr,target):
    arr.sort()
    left = 0
    right = len(arr) - 1
    while left <= right:
        mid = (left + right) // 2
        if arr[mid] == target:
            return mid
        elif arr[mid] < target:
            left = mid + 1
        else:
            right = mid - 1
    return -1

print(bin_sear(arr=list(map(int,input("enter elements space-seperated: ").replace(',', ' ').split())),target=int(input("enter target: "))))