def merge_sorted_arrays():
    arr1 = list(map(int, input("Enter first sorted array (space-separated) : ").split()))
    arr2 = list(map(int, input("Enter second sorted array (space-separated) : ").split()))
    
    merged = []
    i = j = 0
    
    while i < len(arr1) and j < len(arr2):
        if arr1[i] < arr2[j]:
            merged.append(arr1[i])
            i += 1
        else:
            merged.append(arr2[j])
            j += 1
    
    merged.extend(arr1[i:])
    merged.extend(arr2[j:])
    
    print("Merged sorted array:", merged)

merge_sorted_arrays()