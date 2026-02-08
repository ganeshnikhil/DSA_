"""
1.  line 1 and 3
2.  In line 3 left = mid can cause infinite loop if mid == left as left never moves forward so it should be left = mid+1
"""

# 3.
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
