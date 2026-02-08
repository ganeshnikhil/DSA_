# Explanation of the bugs:
# Bug 1: Setting right = len(nums) includes an invalid index since the last index is len(nums) - 1.
# Bug 2: Using while left < right may cause the loop to skip checking the final possible element.
# Bug 3: Using left = mid can cause an infinite loop when left == mid, as the pointers don't move forward.

def binary_search(nums, target):
    #  Correction 1: Set right to len(nums) - 1 because list indices go from 0 to len(nums) - 1
    left, right = 0, len(nums) - 1

    #  Correction 2: Use <= instead of < to ensure the last possible element is checked
    while left <= right:
        mid = (left + right) // 2
        if nums[mid] == target:
            return mid
        elif nums[mid] < target:
            #  Correction 3: Use mid + 1 instead of mid to avoid infinite loop when left == mid
            left = mid + 1
        else:
            right = mid - 1
    return -1
