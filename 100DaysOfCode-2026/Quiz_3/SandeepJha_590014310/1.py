#corrected code
def binary_search(nums, target):
    left, right = 0, len(nums) - 1  # Fix: right should be len(nums) - 1

    while left <= right:           # Fix: condition should be <=
        mid = (left + right) // 2
        if nums[mid] == target:
            return mid
        elif nums[mid] < target:
            left = mid + 1         # Fix: move left to mid + 1
        else:
            right = mid - 1
    return -1

'''
Line 1: right = len(nums) → should be right = len(nums) - 1
sets right out of bounds

Line 3: left = mid → should be left = mid + 1
problem when mid == left. In that case, the value of left doesn’t change, leading to an infinite loop.
'''