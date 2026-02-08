#Sarthak Jain 590014936
#Day 15 Question 1
#Simple Array Sorting

arr = []

n = int(input("Enter number of elements: "))

for i in range(n):
    x = int(input("Enter element: "))
    arr.append(x)

print("Original array:")
print(arr)

# Sort in ascending order using built-in sort
arr.sort()

print("Sorted array in ascending order:")
print(arr)
