'''1. Binary Search Bug The following binary search implementation has a bug. Identify the error and explain why it causes incorrect behavior:   

def binary_search(nums, target):
    left, right = 0, len(nums)  # Line 1

    while left < right:  # Line 2
        mid = (left + right) // 2
        if nums[mid] == target:
            return mid
        elif nums[mid] < target:
            left = mid  # Line 3
        else:
            right = mid - 1  # Line 4
    return -1

Tasks: 
1. Identify the specific line(s) causing the bug 

Solution: In Line 1, should be len(nums) - 1 not len(num),
In Line 3, should be left = mid + 1 not left = mid,
In Line 2, Should be left <= right.

2. Explain why this causes infinite loops or incorrect results

Solution: In Line 1, This can lead to IndexError when mid == len(nums), or it may skip the last valid element.
In Line 3, if left = mid does not move the search forward. So, if mid stay the same, the loop can get stuck in an infinite loop

3. Provide the corrected implementation '''

#Correct Implementation of Code :- 

def binary_search(nums, target):
    left, right = 0, len(nums) - 1  # Line 1

    while left <= right:  # Line 2
        mid = (left + right) // 2
        if nums[mid] == target:
            return mid
        elif nums[mid] < target:
            left = mid + 1  # Line 3
        else:
            right = mid - 1  # Line 4
    return -1