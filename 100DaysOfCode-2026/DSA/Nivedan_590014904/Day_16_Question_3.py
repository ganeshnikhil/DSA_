arr = []
n = int(input("Enter the number of elements in array:- "))
for i in range(n):
    val = int(input(f"Enter the {i} element: "))
    arr.append(val)
maximum = arr[0]
for i in range(1,n):
    if arr[i] > maximum:
        maximum = arr[i]
print(maximum)
