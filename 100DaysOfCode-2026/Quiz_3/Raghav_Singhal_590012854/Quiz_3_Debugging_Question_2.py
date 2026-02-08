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
            # current += 1  # Line B 

    return nums
print(sort_colors([2,0,2,1,1,0]))


# For input [2,0,2,1,1,0], this produces [0,0,2,1,1,2] instead of [0,0,1,1,2,2].

# Tasks: 
# 1. Identify the bug in the algorithm 
# 2. Explain why Line A or Line B
# causes the incorrect behavior the changed element could be 0 or 1 so it needs to be checked again
# 3. Provide the corrected implementation   