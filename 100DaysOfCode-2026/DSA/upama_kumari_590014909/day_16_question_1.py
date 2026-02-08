def linear_search(arr, target):
    for index in range(len(arr)):
        if arr[index] == target:
            return index
    return -1

array = [15, 25, 35, 45]
target = 25
result = linear_search(array, target)
print(result)
