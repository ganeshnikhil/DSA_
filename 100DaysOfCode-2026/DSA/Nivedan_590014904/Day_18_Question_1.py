arr =[]
n = int(input("Enter the number of elements in an array: "))
for i in range(n):
    val = int(input(f"Enter the {i} element: "))
    arr.append(val)
for i in range(n):
    k = i
    for j in range(i+1,n):
        if arr[j] < arr[k]:
            k = j
    arr[i] ,arr[k] = arr[k] ,arr[i]
print(arr)
