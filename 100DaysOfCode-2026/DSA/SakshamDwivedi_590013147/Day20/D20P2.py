#Solution Function
def merge(arr0, arr1):
    merged_arr = []
    i = 0
    j = 0
    while i < len(arr0) and j < len(arr1):
        if arr0[i] <= arr1[j]:
            merged_arr.append(arr0[i])
            i += 1
        else:
            merged_arr.append(arr1[j])
            j += 1

    while i < len(arr0):
        merged_arr.append(arr0[i])
        i+=1

    while j < len(arr1):
        merged_arr.append(arr1[j])
        j += 1

    return merged_arr

#Fixed Input
arr0 = [1, 3, 5]
arr1 = [2, 4, 6]
print(merge(arr0, arr1))

#Custom Input
arr0 = list(int(x) for x in input("Enter array 1 (sorted) : ").split())
arr1 = list(int(x) for x in input("Enter array 2 (sorted) : ").split())
print(merge(arr0, arr1))
