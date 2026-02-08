"""
1. Bug is in line B  i.e.  current += 1 
2. Line B (current += 1) causes the bug because after swapping nums[current] with nums[right] the new value at current is not checked
"""

# 3.
def sort_colors(nums):
    left, current, right = 0, 0, len(nums) - 1

    while current <= right:
        if nums[current] == 0:  # Red
            nums[left], nums[current] = nums[current], nums[left]
            left += 1
            current += 1  # Line A
        elif nums[current] == 1:  # White
            current += 1
        else:  # Blue (nums[current] == 2)
            nums[current], nums[right] = nums[right], nums[current]
            right -= 1

    return nums