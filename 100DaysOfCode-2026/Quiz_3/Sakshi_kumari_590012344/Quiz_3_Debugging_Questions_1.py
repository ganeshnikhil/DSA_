1.  Identify the specific line(s) causing the bug 
The bug is in:
Line 1: right = len(nums)
Line 3: left = mid


 2. Explain why this causes infinite loops or incorrect results?
In Line 1, right was set to len(nums), but Python lists are 0-indexed, so the last valid index is len(nums)- 
Using len(nums) could skip checking the last element or even give an index error.

In Line 3, writing left = mid is also not safe.
If mid is equal to left and the value isn't found, the loop can get stuck because left doesn’t change,
which might lead to an infinite loop or wrong result.


3.  Provide the corrected implementation.
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
