#Sarthak Jain 590014936
#Day 16 Question 3
#Find Maximum Element

arr = []

n = int(input("Enter number of elements: "))

for i in range(n):
    x = int(input("Enter element: "))
    arr.append(x)

# Assume first element is maximum
maximum = arr[0]

# Traverse the array to find the maximum
for i in range(1, n):
    if arr[i] > maximum:
        maximum = arr[i]

print("Maximum element in the array is:", maximum)
