arr = []
n = int(input("Enter the number of elements in array:- "))
for i in range(n):
    val = int(input(f"Enter the {i} element: "))
    arr.append(val)
target = int(input("Target: "))
counter = 0
for i in range(n):
    if arr[i] == target :
        counter += 1
if counter > 0 :
    print(counter)
else:
    print(-1)
