arr = []
n = int(input("Enter the number of elements in array:- "))
for i in range(n):
    val = int(input(f"Enter the {i} element: "))
    arr.append(val)
arr.sort()
target = int(input("Enter the target value: "))
i = 0
while i<n:
    mid = (i+n)//2
    if arr[mid] == target:
        print(mid)
        break
    elif arr[mid] < target:
        i = mid +1
    else:
        n = mid -1
else:
    print("-1")
