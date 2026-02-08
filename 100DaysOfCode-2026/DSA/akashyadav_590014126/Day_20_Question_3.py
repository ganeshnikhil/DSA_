def kth_element(arr, k):
    for _ in range(k):
        max_val = max(arr)
        arr.remove(max_val)
    return max_val

#example
print(kth_element([22,23,21,20,25],2))