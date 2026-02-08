def sort_by_length(arr):
    n = len(arr)
    for i in range(n):
        for j in range(0, n - i - 1):
            if len(arr[j]) > len(arr[j + 1]):
                arr[j], arr[j + 1] = arr[j + 1], arr[j]
    return arr


input_strings = ["apple", "pie", "washington", "cat"]
output_strings = sort_by_length(input_strings)
print(output_strings)