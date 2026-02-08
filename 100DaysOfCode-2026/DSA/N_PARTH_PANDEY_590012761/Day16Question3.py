def find_max(arr):

    if not arr:  
        return None
    
    max_num = arr[0]  
    for num in arr[1:]:  
        if num > max_num:
            max_num = num
    return max_num
print(find_max([-5, -2, -8, -1]))    
