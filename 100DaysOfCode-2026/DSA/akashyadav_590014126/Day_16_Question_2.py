def count_occurrences(arr, target):
    count = 0
    for num in arr:
        if num == target:   # if the element of array equals target element to be counted
            count += 1  # counting the target number
    return count    # to return the total occurences

#example
print(count_occurrences([10, 20, 30, 10, 40], 10))     # Output: 2