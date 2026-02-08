def linear_search(arr, target):
    for index, value in enumerate(arr):
        if value == target:
            return index
    return -1

# User input
arr = list(map(int, input("Enter array elements separated by spaces: ").split()))
target = int(input("Enter target to search: "))
result = linear_search(arr, target)
print("Output:", result)