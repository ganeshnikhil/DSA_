1)
Line 1: right = len(nums) is incorrect.
Line 3: left = mid is incorrect.

2)
Out-of-bounds errors (because we try to access nums[len(nums)])
Infinite loops (when left never moves past mid)

3) Correct Implementation:
def binary_search(nums, target):
    left, right = 0, len(nums) - 1  # Fix the upper bound

    while left <= right:  # Include equal case
        mid = (left + right) // 2
        if nums[mid] == target:
            return mid
        elif nums[mid] < target:
            left = mid + 1  # Skip mid, move right
        else:
            right = mid - 1
    return -1
