arr = []
n = int(input("Enter number of elements: "))
for i in range(n):
    val = int(input(f"Enter element {i+1}: "))
    arr.append(val)
k = int(input("Enter the value of k: "))
for i in range(k):
    maximum = arr[0]
    for j in range(1,len(arr)):
        if arr[j]> maximum:
            maximum = arr[j]
    arr.remove(maximum)
print(maximum)
