def binary_search(nums, target):
    left, right = 0, len(nums) -1 # Line 1

    while left <= right:  # Line 2
        mid = (left + right) // 2
        if nums[mid] == target:
            return mid
        elif nums[mid] < target:
            left = mid + 1 # Line 3
        else:
            right = mid - 1  # Line 4
    return -1

# Tasks: 
# 1. Identify the specific line(s) causing the bug 
# 2. Explain why this causes infinite loops or incorrect results  #because of line 3
# 3. Provide the corrected implementation  