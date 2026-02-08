# Implement insertion sort using the card-sorting approach.

arr = list(map(int,input("enter list :").split()))
n = len(arr)
for i in range(1, n):
    key = arr[i]
    j = i - 1

    while j >= 0 and arr[j] > key:
        arr[j + 1] = arr[j]
        j = j - 1
    arr[j + 1] = key
print(arr)
