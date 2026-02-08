Your task: Implement linear search to find target element's index position.

def linear_search(arr, target):
    if not isinstance(arr, list):
        return -1
    for index, value in enumerate(arr):
        try:
            if value == target:
                return index
        except Exception:
            continue
    return -1
