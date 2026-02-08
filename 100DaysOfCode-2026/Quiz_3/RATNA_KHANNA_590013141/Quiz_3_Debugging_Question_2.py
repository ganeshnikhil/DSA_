#1. The bug is in Line B: current += 1 should not be there.
#2. When swapping with right, the new element at current has not been checked yet.Moving current forward skips checking this new element, which can cause unsorted values to be left in the wrong place.
#3.
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
    return nums

