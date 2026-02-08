def merge_sorted_arrays_inplace(arr1, arr2):
    
    if arr1 is None or arr2 is None:
        return []
    
    if not arr1 and not arr2:
        return []
    if not arr1:
        return arr2.copy()
    if not arr2:
        return arr1.copy()
    
    merged = []
    i = j = 0
    
    while i < len(arr1) and j < len(arr2):
        if arr1[i] <= arr2[j]:
            merged.append(arr1[i])
            i += 1
        else:
            merged.append(arr2[j])
            j += 1
    
    merged.extend(arr1[i:])
    merged.extend(arr2[j:])
    
    return merged

print(merge_sorted_arrays_inplace(list(map(int,input("enter the array: ").replace(","," ").split())),list(map(int,input("enter the array: ").replace(","," ").split()))))