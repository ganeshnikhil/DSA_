def count_occurrences(arr, target):
    count = 0
    for element in arr:
        if element == target:
            count += 1
    return count
