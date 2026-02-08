#Sort three colors efficiently using single-pass three-way partitioning.

arr =list(map(int,input("enter list :").split()))

low = 0
mid = 0
high = len(arr) - 1


while mid <= high:
    if arr[mid] == 0:
       
        temp = arr[low]
        arr[low] = arr[mid]
        arr[mid] = temp
        low += 1
        mid += 1
    elif arr[mid] == 1:
        mid += 1
    else:
        temp = arr[mid]
        arr[mid] = arr[high]
        arr[high] = temp
        high -= 1


print(arr)
