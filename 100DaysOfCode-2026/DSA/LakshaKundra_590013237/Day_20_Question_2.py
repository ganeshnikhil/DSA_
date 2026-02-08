def merge_arrays(a, b):
    i = j = 0
    result = []
    while i < len(a) and j < len(b):
        if a[i] < b[j]:
            result.append(a[i])
            i += 1
        else:
            result.append(b[j])
            j += 1
    result.extend(a[i:])
    result.extend(b[j:])
    return result

print(merge_arrays([1, 3, 5], [2, 4, 6]))
print(merge_arrays([1, 5, 9, 10], [2, 3, 8, 13]))
print(merge_arrays([10, 30, 50], [20, 40, 60, 70]))
