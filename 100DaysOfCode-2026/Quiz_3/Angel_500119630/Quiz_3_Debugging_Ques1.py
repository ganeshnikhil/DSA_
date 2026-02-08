
# Buggy version
def binary_search(nums, target):
    left, right = 0, len(nums)  # Bug: right should be len(nums) - 1

    while left < right:
        mid = (left + right) // 2
        if nums[mid] == target:
            return mid
        elif nums[mid] < target:
            left = mid      # Bug: should be mid + 1
        else:
            right = mid - 1
    return -1

# 1. Bugs
# - right = len(nums) causes out-of-bound logic since last valid index is len(nums) - 1
# - left = mid causes infinite loop when left == mid

# 2. Consider nums = [1, 3, 5, 7], target = 7
# Expected output = 3 (index of 7)
# Buggy version may return -1 or loop forever

# 3. The above function may return incorrect index or never terminate

# 4. Corrected version
def binary_search(nums, target):
    left, right = 0, len(nums) - 1  # Fix: set right to last valid index

    while left <= right:  # Include both ends
        mid = (left + right) // 2
        if nums[mid] == target:
            return mid
        elif nums[mid] < target:
            left = mid + 1  # Move past mid
        else:
            right = mid - 1
    return -1
