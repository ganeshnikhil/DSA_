# ---------------------------
# 1. Binary Search Bug Fix
# ---------------------------

def binary_search(nums, target):
    # BUG LINE: right = len(nums)
    # Explanation: 'right' should be len(nums) - 1 because list indices go from 0 to len-1.
    # Using len(nums) allows mid to point outside the array on the last iteration.
    left, right = 0, len(nums) - 1

    while left <= right:  # FIXED: changed from 'left < right' to 'left <= right'
        # Now loop includes the case where left == right (single element to check)
        mid = (left + right) // 2
        if nums[mid] == target:
            return mid
        elif nums[mid] < target:
            # BUG LINE: left = mid
            # Explanation: This can cause infinite loop if mid == left. Need to move left past mid.
            left = mid + 1
        else:
            right = mid - 1
    return -1
