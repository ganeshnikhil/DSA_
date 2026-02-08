def count_frequency(arr, target):
    count = 0
    for num in arr:
        if num == target:
            count += 1
    return count

array = [5, 1, 5, 5, 3, 5, 7]
target = 5
result = count_frequency(array, target)
print(result)
