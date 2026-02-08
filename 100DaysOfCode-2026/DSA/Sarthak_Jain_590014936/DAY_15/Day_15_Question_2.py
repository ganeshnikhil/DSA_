#Sarthak Jain 590014936
#Day 15 Question 2
#Sort Strings by Length

arr = []

n = int(input("Enter number of strings: "))

for i in range(n):
    s = input("Enter string: ")
    arr.append(s)

print("Original list of strings:")
print(arr)

# Sort by length using a custom key
arr.sort(key=len)

print("Strings sorted by length:")
print(arr)
