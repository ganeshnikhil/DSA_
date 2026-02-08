n = int(input("Enter the number of elements: "))
arr = []
for i in range(n):
    val = input(f"Enter the {i+1} element: ")
    arr.append(val)
arr.sort()
print(arr)
