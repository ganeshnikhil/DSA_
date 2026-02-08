Your task: Merge two pre-sorted arrays into one sorted array using optimal merging 
technique.

def merge_sorted_arrays(arr1, arr2):
    if not isinstance(arr1, list) or not isinstance(arr2, list):
        print("Both inputs must be lists.")
        return []
    merged = []
    i = 0
    j = 0
    while i < len(arr1) and j < len(arr2):
        if arr1[i] < arr2[j]:
            merged.append(arr1[i])
            i += 1
        else:
            merged.append(arr2[j])
            j += 1
          
    while i < len(arr1):
        merged.append(arr1[i])
        i += 1

    while j < len(arr2):
        merged.append(arr2[j])
        j += 1

    return merged
