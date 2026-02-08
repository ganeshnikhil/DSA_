# ---------------------------
# 2. Dutch National Flag Algorithm Bug Fix
# ---------------------------

def sort_colors(nums):
    left, current, right = 0, 0, len(nums) - 1

    while current <= right:
        if nums[current] == 0:
            # Swap with left and move both pointers forward.
            nums[left], nums[current] = nums[current], nums[left]
            left += 1
            current += 1
        elif nums[current] == 1:
            # Leave 1 in place, just move on.
            current += 1
        else:
            # BUG LINE: current += 1 after swapping with right
            # Explanation: The element swapped from right is unprocessed; we must check it again.
            # So, do not increment current here!
            nums[current], nums[right] = nums[right], nums[current]
            right -= 1
            # DO NOT increment current

    return nums