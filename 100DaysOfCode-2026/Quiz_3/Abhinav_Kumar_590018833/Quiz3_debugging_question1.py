# 1. Binary Search Bug The following binary search implementation has a bug. Identify the error and explain why it causes incorrect behavior:   

# def binary_search(nums, target):
#     left, right = 0, len(nums)  # Line 1

#     while left < right:  # Line 2
#         mid = (left + right) // 2
#         if nums[mid] == target:
#             return mid
#         elif nums[mid] < target:
#             left = mid  # Line 3
#         else:
#             right = mid - 1  # Line 4
#     return -1

def binary_search(nums, target):
    left, right = 0, len(nums) - 1  # Fix: right should be last valid index

    while left <= right:  # Fix: use <= so mid is still checked when left == right
        mid = (left + right) // 2
        if nums[mid] == target:
            return mid
        elif nums[mid] < target:
            left = mid + 1  # Fix: move past mid
        else:
            right = mid - 1
    return -1
#in python array index starts from 0 and ends at len(nums) - 1, so right should be initialized to len(nums) - 1.
# The condition in the while loop should be left <= right to ensure that the last element is checked.
# The line `left = mid` should be `left = mid + 1` to avoid an infinite loop when the target is greater than the middle element.