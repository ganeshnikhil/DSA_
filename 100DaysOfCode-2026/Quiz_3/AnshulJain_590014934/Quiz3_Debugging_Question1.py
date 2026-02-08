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
# Task Answers:

# 1. Identify the specific line(s) causing the bug:
#    - Line 1: right = len(nums)
#    - Line 2: while left < right
#    - Line 3: left = mid

# 2. Explain why this causes infinite loops or incorrect results:
#    - Line 1 sets right beyond valid index range, possibly causing out-of-bounds errors.
#    - Line 2 might exit early and skip valid comparisons.
#    - Line 3 doesn't move the left pointer if mid == left, causing infinite loop.

# 3. Provide the corrected implementation:
#    - Set right = len(nums) - 1 to stay in bounds.
#    - Use while left <= right to ensure all elements are checked.
#    - Update left = mid + 1 to move the search window forward.
