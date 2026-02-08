def sort_colors(nums):
    """
    Dutch National Flag Problem - Fixed Version
    """

    # Task 1: Bug Found
    # The mistake was in the part where we were handling 2s (blue).
    # After swapping with right, the code was increasing current, which skipped checking the new value.

    # Task 2: Why it gave wrong results
    # When we swap, the value at 'current' changes — but if we increment current,
    # we miss checking it, which breaks the logic.

    # Task 3: Final working solution
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

