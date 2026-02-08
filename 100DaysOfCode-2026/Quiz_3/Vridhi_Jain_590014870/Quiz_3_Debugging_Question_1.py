# #1. Binary Search Bug The following binary search implementation has a bug. Identify the error and explain why it causes incorrect behavior:   

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

# Tasks: 
# 1. Identify the specific line(s) causing the bug 
# 2. Explain why this causes infinite loops or incorrect results 
# 3. Provide the corrected implementation  

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

nums = [1, 3, 5, 7, 9, 11]
print(binary_search(nums, 7))
print(binary_search(nums, 2))
