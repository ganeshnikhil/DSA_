Your task: Find the maximum element in an array using single-pass traversal

def find_max_element(arr):
    if type(arr) != list or len(arr) == 0:
        return None
    max_val = None
    for item in arr:
        if type(item) == int or type(item) == float:
            if max_val is None or item > max_val:
                max_val = item
    return max_val
