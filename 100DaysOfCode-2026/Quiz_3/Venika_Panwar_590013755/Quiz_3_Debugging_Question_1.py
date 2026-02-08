#Question 1. 
'''
Binary Search Bug The following binary search implementation has a bug. 
Identify the error and explain why it causes incorrect behavior:   
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
2. Explain why this causes infinite loops or incorrect results 
3. Provide the corrected implementation'''




#Answer1:

#Task 1: Identify the specific line(s) causing the bug.
'''Answer:

Line 1: left, right = 0, len(nums)

Line 3: left = mid

These two lines are responsible for the bug.'''



#Task 2: Explain why this causes infinite loops or incorrect results.
'''Answer:
In Line 1, the right pointer is incorrectly initialized as len(nums), 
which is outside the valid index range of the array. 
For example, if the array has 5 elements, valid indices go from 0 to 4, 
but right = 5 causes an out-of-bounds access or wrong mid-calculation.

In Line 3, when nums[mid] < target, the left pointer is updated to mid. 
This causes a looping problem if mid equals left, 
because we do not move past the already-checked index. 
This results in a possible infinite loop when the target is not present in the array.

To maintain progress in binary search, we must move the left pointer to mid + 1, not just mid.'''



#Task 3: Provide the corrected implementation.
'''Answer:'''

# User-defined Binary Search with proper indexing

def binary_search(nums, target):
    left = 0
    right = len(nums) - 1  # Corrected: right should point to last valid index

    while left <= right:
        mid = (left + right) // 2  # Mid-point of current search range

        if nums[mid] == target:
            return mid  # Element found, return index

        elif nums[mid] < target:
            left = mid + 1  # Move right, discard mid and all left of it

        else:
            right = mid - 1  # Move left, discard mid and all right of it

    return -1  # Target not found


