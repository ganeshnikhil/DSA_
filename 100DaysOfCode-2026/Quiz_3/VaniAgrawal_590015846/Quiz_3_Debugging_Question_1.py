# Identify Buggy Lines
#Line 1: right = len(nums) should be right = len(nums) - 1
#Line 3: left = mid should be left = mid + 1

#Why This Causes Incorrect Behavior
#right = len(nums) makes right out of bounds, which could lead to IndexError or incorrect comparisons.
#left = mid (instead of mid + 1) causes infinite loops when left == mid, because neither left nor right shrink, so left < right remains true forever.

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


