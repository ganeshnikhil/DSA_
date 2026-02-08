#Task 1
Line 1: right = len(nums)
Line 3: left = mid

#Task 2
Bug 1 — right = len(nums) (Line 1):
Python arrays are 0-indexed, so the last valid index is len(nums) - 1.

Setting right = len(nums) makes nums[mid] potentially access out-of-bounds or causes off-by-one logic errors.

Bug 2 — left = mid (Line 3):
When nums[mid] < target, and left = mid, if mid == left, this does not reduce the search space.

This can lead to an infinite loop when left and mid remain the same across iterations.

#Task 3
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
