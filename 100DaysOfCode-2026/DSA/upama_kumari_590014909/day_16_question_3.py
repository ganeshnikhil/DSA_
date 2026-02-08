def find_maximum(arr):
    max_value = arr[0]
    for num in arr:
        if num > max_value:
            max_value = num
    return max_value

array = [100, 250, 75, 300, 150]
result = find_maximum(array)
print(result)
