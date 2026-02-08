#Corrected code
def sort_colors(nums):
    left, current, right = 0, 0, len(nums) - 1

    while current <= right:
        if nums[current] == 0:  # Red
            nums[left], nums[current] = nums[current], nums[left]
            left += 1
            current += 1
        elif nums[current] == 1:  # White
            current += 1
        else:  # Blue (nums[current] == 2)
            nums[current], nums[right] = nums[right], nums[current]
            right -= 1
            # DON'T move current here — recheck the swapped value
            # So current += 1 is intentionally omitted here

    return nums

'''
The bug is at Line B → current += 1 after swapping with right.
When you swap nums[current] with nums[right], the new nums[current] could be:

0, 1, or 2

But you don’t check it again—you immediately increment current, which skips checking the newly swapped value, potentially missing a 0 or 1 that should be moved.

This leads to an incorrect final order, especially when 2s are swapped into current from right.
'''