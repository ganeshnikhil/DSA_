def find_max_element(arr):
    max_val = arr[0]
    for i in arr:
        if i > max_val:
            max_val = i
    return max_val

print(find_max_element([3, 7, 1, 9, 4, 6]))
print(find_max_element([-5, -2, -8, -1, -3]))
print(find_max_element([100, 250, 75, 300, 150]))
