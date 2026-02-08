arr = []
n = int(input("Enter the number of elements in array:- "))
for i in range(n):
    val = int(input(f"Enter the {i} element: "))
    arr.append(val)
target = int(input("Target: "))
for i in range(n):
    if arr[i] == target :
        print(f"The element is at {i} position")
        break
else:
    print("-1") 
