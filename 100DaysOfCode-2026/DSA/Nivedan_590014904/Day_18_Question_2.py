arr =[]
newarr = []
n = int(input("Enter the number of elements in an array: "))
for i in range(n):
    val = int(input(f"Enter the {i} element: "))
    arr.append(val)
newarr.append(arr[0])
for i in range(1,len(arr)):
    for j in range(len(newarr)):
        if newarr[j] > arr[i]:
            newarr.insert(j,arr[i])
            break
    else:
        newarr.append(arr[i])
print(newarr)
