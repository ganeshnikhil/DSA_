# Line causing the bug 
# Line 1: right = len(nums) → should be right = len(nums) - 1
# Line 3: left = mid → should be left = mid + 1


# Why this causes infinite loops or incorrect results
 # Bug in Line 1:
 # In Python, list indices go from 0 to len(nums) - 1
# Bug in line 3 :
# If nums[mid] < target and we do left = mid, we're not moving forward — we might check the same mid again and again, causing an infinite loop.

# correct implementation 
 def binary_search(nums, target):
    left, right = 0, len(nums) - 1  # Corrected Line 1

    while left <= right:  
        mid = (left + right) // 2
        if nums[mid] == target:
            return mid
        elif nums[mid] < target:
            left = mid + 1  # Corrected Line 3
        else:
            right = mid - 1
    return -1
