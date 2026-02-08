arr =[]
n = int(input("Enter the number of elements in an array: "))
for i in range(n):
    val = int(input(f"Enter the {i} element: "))
    arr.append(val)
arr.sort()
target = int(input("Enter the target: "))
i=0
last =n-1
res = -1
while i<=last:
    mid = (i+last)//2
    if arr[mid] == target:
        res = mid
        last = mid-1
    elif arr[mid] < target:
        i = mid + 1
    else:
        last = mid -1
if res == -1:
    print("-1")
else:
    print(res)
