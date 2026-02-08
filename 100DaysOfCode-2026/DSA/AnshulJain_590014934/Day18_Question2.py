arr = list(map(int, input().split()))
n = len(arr)
for i in range(1, n):
    key = arr[i]
    j = i - 1
    while j >= 0 and arr[j] > key:
        arr[j + 1] = arr[j]
        j -= 1
    arr[j + 1] = key
print(*arr)
# Taking input from the user
# For Example: 5 2 9 1 5 6  
# Output: 1 2 5 5 6 9