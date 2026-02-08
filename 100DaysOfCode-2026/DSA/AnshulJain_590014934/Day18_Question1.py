arr = list(map(int, input().split()))
n = len(arr)
for i in range(n):
    min_index = i
    for j in range(i + 1, n):
        if arr[j] < arr[min_index]:
            min_index = j
    arr[i], arr[min_index] = arr[min_index], arr[i]
print(*arr)
# Taking input from the user
#for Example: 5 2 9 1 5 6
# Output: 1 2 5 5 6 9