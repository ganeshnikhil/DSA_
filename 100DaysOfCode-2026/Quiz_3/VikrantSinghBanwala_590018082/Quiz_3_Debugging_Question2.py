'''Identify the bug in the algorithm:

The bug lies in the handling of the current index after swapping elements. Specifically, Line B incorrectly increments current after swapping a blue (2) with the right boundary.
Explain why Line A or Line B causes the incorrect behavior:

In Line A, when a red (0) is found, it correctly increments both left and current. However, in Line B, when a blue (2) is swapped with the element at the right index, current is incremented without checking the new value at the current index. This can lead to skipping over a newly swapped element that needs to be processed, resulting in incorrect sorting.'''

def sort_colors(nums):
    left, current, right = 0, 0, len(nums) - 1

    while current <= right:
        if nums[current] == 0: 
            nums[left], nums[current] = nums[current], nums[left]
            left += 1
            current += 1 
        elif nums[current] == 1:
            current += 1
        else:
            nums[current], nums[right] = nums[right], nums[current]
            right -= 1
      
    return nums
