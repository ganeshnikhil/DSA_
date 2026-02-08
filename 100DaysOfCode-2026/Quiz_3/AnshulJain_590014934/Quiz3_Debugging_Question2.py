def sort_colors(nums):
    left, current, right = 0, 0, len(nums) - 1

    while current <= right:
        if nums[current] == 0:  # Red
            nums[left], nums[current] = nums[current], nums[left]
            left += 1
            current += 1  # Line A (correct)
        elif nums[current] == 1:  # White
            current += 1
        else:  # Blue (nums[current] == 2)
            nums[current], nums[right] = nums[right], nums[current]
            right -= 1
            #DO NOT increment current here
            # current += 1 ← this caused the bug in Line B

    return nums
nums = [2, 0, 2, 1, 1, 0]
sorted_nums = sort_colors(nums)
print(sorted_nums) 
# Task Answers:
# 1. Identify the bug in the algorithm:
#    - The bug is in Line B: `current += 1` after swapping with nums[right].
# 2. Explain why Line A or Line B causes the incorrect behavior:
#    - Line A is correct: when we encounter 0, swapping with nums[left] and moving both pointers is safe.
#    - Line B is incorrect: when we swap a 2 with nums[right], the new element at nums[current] might be 0 or 1.
#      If we increment current without re-checking, we may skip sorting that element. This results in incorrect order,
#      such as [0, 0, 2, 1, 1, 2] instead of the correct [0, 0, 1, 1, 2, 2].
# 3. Provide the corrected implementation:
#    - Remove `current += 1` from Line B.
#    - Let the loop re-evaluate nums[current] after the swap with nums[right].
