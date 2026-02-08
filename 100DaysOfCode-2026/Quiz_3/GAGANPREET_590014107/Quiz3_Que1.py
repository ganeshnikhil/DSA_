# 1. Identify the specific line(s) causing the bug 
#    -- line 1  (left, right = 0, len(nums) ) and line 3 ( left = mid )
# 2. Explain why this causes infinite loops or incorrect results 
#    -- The loop condition is while left < right, but when left and right are         adjacent, mid becomes equal to left.
#       If nums[mid] < target, the code sets left = mid — which doesn’t move the      left  pointer forward.
#       This causes an infinite loop because left stays the same and the condition     never becomes false.
#       Also, initializing right as len(nums) (instead of len(nums) - 1) includes     an invalid index, which can lead to out-of-bounds errors.
# 3.Provide the corrected implementation
def binary_search(nums, target):
    left, right = 0, len(nums) - 1  

    while left <= right: 
        mid = (left + right) // 2
        if nums[mid] == target:
            return mid
        elif nums[mid] < target:
            left = mid + 1  
        else:
            right = mid - 1
    return -1
