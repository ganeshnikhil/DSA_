def binary_search(nums, target):
    left, right = 0, len(nums) - 1  

    while left <= right:  
        mid = (left + right) // 2
        if nums[mid] == target:
            return mid
        elif nums[mid] < target:
            left = mid + 1  
        else:
            right = mid - 1
    return -1

#line 1 & line 3 are causing bugs
#In line 1 right = len(nums) makes right one index beyond the last valid index which will cause an index error
#In line 3 left = mid causes an infinite loop when mid == left which causes the loop to run indefinitely