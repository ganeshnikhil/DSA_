#Sarthak Jain 590014936
#Day 15 Question 3
#Bubble Sort Implementation

arr = []

n = int(input("Enter number of elements: "))

for i in range(n):
    x = int(input("Enter element: "))
    arr.append(x)

print("Original array:")
print(arr)

# Bubble sort logic
for i in range(n - 1):
    for j in range(n - i - 1):
        if arr[j] > arr[j + 1]:
            # Swap elements
            arr[j], arr[j + 1] = arr[j + 1], arr[j]

print("Sorted array in ascending order:")
print(arr)
