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
            # current += 1  # Line B (Bug Fixed!)

    return nums


# [1] The bug is in 'Line B', we are incrementing the 'current' counter
#     after swapping with the 'right' value. But we are not processing
#     the swapped value and instead skipping to the next value.
# [2] We are skipping processing the swapped value. For example, if 2 is swapped
#     with 2, the swapped 2 (we got from the 'right') is not processed and will be
#     placed in the 'current' index.
