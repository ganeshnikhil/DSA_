#: Merge two pre-sorted arrays into one sorted array using optimal merging technique.
n1 = int(input("Enter number of elements in Array 1: "))
print("Enter elements of Array 1 in sorted order:")
arr1 = []
for i in range(n1):
    num = int(input())
    arr1.append(num)

n2 = int(input("Enter number of elements in Array 2: "))
print("Enter elements of Array 2 in sorted order:")
arr2 = []
for i in range(n2):
    num = int(input())
    arr2.append(num)

i = 0
j = 0
merged = []

while i < n1 and j < n2:
    if arr1[i] < arr2[j]:
        merged.append(arr1[i])
        i += 1
    else:
        merged.append(arr2[j])
        j += 1

while i < n1:
    merged.append(arr1[i])
    i += 1

while j < n2:
    merged.append(arr2[j])
    j += 1

print("Merged Sorted Array:")
print(merged)
