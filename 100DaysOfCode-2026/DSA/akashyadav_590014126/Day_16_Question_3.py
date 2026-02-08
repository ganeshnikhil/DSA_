def find_max_element(arr):
    if not arr:
        return None  # handles case when array is empty
    max = arr[0]    # starts with initializing first elemenbt as thge largest
    for num in arr[1:]:
        if num > max:   # checking for elements which is largest
            max = num   # found the largest element
    return max
#example:
print(find_max_element([-5, -2, -8, -1, -3]))    # Output: -1