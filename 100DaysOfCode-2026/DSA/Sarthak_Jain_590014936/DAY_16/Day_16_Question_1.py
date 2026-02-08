#Sarthak Jain 590014936
#Day 16 Question 1
#Linear Search

arr = []

n = int(input("Enter number of elements: "))

for i in range(n):
    x = int(input("Enter element: "))
    arr.append(x)

target = int(input("Enter target element to search: "))

index = -1  # Default if not found

# Linear search
for i in range(n):
    if arr[i] == target:
        index = i
        break

if index != -1:
    print("Target element found at index:", index)
else:
    print("Target element not found (-1)")
