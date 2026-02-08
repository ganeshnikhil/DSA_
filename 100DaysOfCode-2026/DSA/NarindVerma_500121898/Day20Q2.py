def merge_arrays(a, b):
    result = []
    i = j = 0
    n1, n2 = len(a), len(b)

    while i < n1 and j < n2:
        if a[i] < b[j]:
            result.append(a[i])
            i += 1
        else:
            result.append(b[j])
            j += 1

    while i < n1:
        result.append(a[i])
        i += 1

    while j < n2:
        result.append(b[j])
        j += 1

    return result

# Example input arrays
a = [1, 3, 5]
b = [2, 4, 6]

# Merging the arrays
merged = merge_arrays(a, b)

# Printing the result
for num in merged:
    print(num, end=' ')
