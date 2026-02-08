def kth_largest_element(arr, k):
    if not arr:
        return None
    
    if k <= 0 or k > len(arr):
        return None
    
    arr.sort(reverse=True)
    return arr[k-1]

print(kth_largest_element(list(map(int,input("enter the array: ").replace(","," ").split())),int(input("enter the k: "))))