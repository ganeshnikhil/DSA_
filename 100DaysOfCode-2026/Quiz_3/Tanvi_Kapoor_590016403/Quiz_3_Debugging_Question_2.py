def sort_colors(nums):
    left, current, right = 0, 0, len(nums) - 1

    while current <= right:
        if nums[current] == 0:
            # Swap current with left
            nums[left], nums[current] = nums[current], nums[left]
            left += 1
            current += 1  # Safe to move forward
        elif nums[current] == 1:
            current += 1  # White is in the middle; just skip
        else:
            # Swap current with right, but don't move current yet
            nums[current], nums[right] = nums[right], nums[current]
            right -= 1  # Recheck the new nums[current] in the next iteration

    return nums
