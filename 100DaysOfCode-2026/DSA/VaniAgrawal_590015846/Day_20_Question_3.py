#: Find the Kth largest element using efficient selection algorithms beyond simple sorting. 
n = int(input("Enter number of elements in the array: "))

print("Enter the elements:")
arr = []
for i in range(n):
    num = int(input())
    arr.append(num)

k = int(input("Enter the value of K: "))

for i in range(n):
    for j in range(i + 1, n):
        if arr[i] < arr[j]:
            temp = arr[i]
            arr[i] = arr[j]
            arr[j] = temp

print("The", k, "th largest element is:")
print(arr[k - 1])
