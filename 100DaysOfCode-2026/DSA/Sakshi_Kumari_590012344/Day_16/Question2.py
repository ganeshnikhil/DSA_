Your task: Count the frequency of a target value in an array.
  
def count_frequency(arr, target):
    if not isinstance(arr, list):
        return 0
    count = 0
    for value in arr:
        try:
            if value == target:
                count += 1
        except Exception:
            continue
    return count
