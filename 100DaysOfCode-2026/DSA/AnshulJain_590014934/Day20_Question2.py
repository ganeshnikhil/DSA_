arr1 = list(map(int, input().split()))
arr2 = list(map(int, input().split()))
i = j = 0
merged = []
while i < len(arr1) and j < len(arr2):
    if arr1[i] < arr2[j]:
        merged.append(arr1[i])
        i += 1
    else:
        merged.append(arr2[j])
        j += 1
while i < len(arr1):
    merged.append(arr1[i])
    i += 1
while j < len(arr2):
    merged.append(arr2[j])
    j += 1
print(merged)
#taking input from the user 
# For Example:
# Input:
# arr1 = [1, 3, 5]  
#arr2 = [2, 4, 6]
# Output:[1, 2, 3, 4, 5, 6]