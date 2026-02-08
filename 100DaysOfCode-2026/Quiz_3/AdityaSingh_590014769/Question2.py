''' bug = current += 1  # Line B'''
''' Explain why Line A or Line B causes the incorrect behavior  because 
        Line A is correct → When nums[current] == 0, we swap with left, and both left and current can safely move forward.
        Line B is wrong → When nums[current] == 2, after swapping:
          We must check the new nums[current], because it might be 0, 1, or 2.
          Skipping this check by doing current += 1 skips elements that need processing.'''



def sort_colors(nums):
    left, current, right = 0, 0, len(nums) - 1

    while current <= right:
        if nums[current] == 0:
            nums[left], nums[current] = nums[current], nums[left]
            left += 1
            current += 1
        elif nums[current] == 1:
            current += 1
        else:  # nums[current] == 2
            nums[current], nums[right] = nums[right], nums[current]
            right -= 1
    return nums
