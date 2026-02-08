def count_occurrences(arr, target):
    count = 0
    for i in arr:
        if i == target:
            count += 1
    return count

print(count_occurrences([1, 2, 3, 2, 2, 4], 2))
print(count_occurrences([5, 1, 5, 5, 3, 5, 7], 5))
print(count_occurrences([10, 20, 30, 10, 40], 10))
