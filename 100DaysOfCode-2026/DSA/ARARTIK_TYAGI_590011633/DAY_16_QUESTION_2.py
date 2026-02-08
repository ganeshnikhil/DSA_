def count_occurrences(arr, target):
    count = 0
    for value in arr:
        if value == target:
            count += 1
    return count

# User input
arr = list(map(int, input("Enter array elements separated by spaces: ").split()))
target = int(input("Enter target to count: "))
result = count_occurrences(arr, target)
print("Output:", result)