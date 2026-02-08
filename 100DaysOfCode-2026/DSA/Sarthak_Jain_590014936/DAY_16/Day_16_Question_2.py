#Sarthak Jain 590014936
#Day 16 Question 2
#Count Occurrences

arr = []

n = int(input("Enter number of elements: "))

for i in range(n):
    x = int(input("Enter element: "))
    arr.append(x)

target = int(input("Enter target element to count: "))

count = 0

# Traverse and count occurrences
for i in range(n):
    if arr[i] == target:
        count += 1

print("Target element occurs", count, "times.")
