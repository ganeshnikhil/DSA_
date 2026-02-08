#1. Lines Causing the Bug:
#Line 1: Incorrect right boundary → should be len(nums) - 1 instead of len(nums)
#Line 3: Incorrect left update → should be left = mid + 1
#2. Explanation:
#Bug in Line 1:In Python, array indices go from 0 to len(nums) - 1.Setting right = len(nums) makes right point one position beyond the last index, which can lead to index out of range errors in some cases.
#Bug in Line 3:If nums[mid] < target and you set left = mid, you don’t eliminate the mid position from the next search range.This can cause an infinite loop when the search window doesn’t shrink.
#3.
def binary_search(nums, target):
    left, right = 0, len(nums) - 1 
    while left <= right:  
        mid = (left + right) 
        if nums[mid] == target:
            return mid
        elif nums[mid] < target:
            left = mid + 1 
        else:
            right = mid - 1
    return -1
