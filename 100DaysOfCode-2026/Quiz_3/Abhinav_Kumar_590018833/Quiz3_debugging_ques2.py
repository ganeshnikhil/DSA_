# 2. Dutch National Flag Algorithm Bug A student implemented the Dutch National Flag algorithm (three-color sorting) but it's producing incorrect results. Analyze the code:   

#   def sort_colors(nums):
#     left, current, right = 0, 0, len(nums) - 1

#     while current <= right:
#         if nums[current] == 0:  # Red
#             nums[left], nums[current] = nums[current], nums[left]
#             left += 1
#             current += 1  # Line A
#         elif nums[current] == 1:  # White
#             current += 1
#         else:  # Blue (nums[current] == 2)
#             nums[current], nums[right] = nums[right], nums[current]
#             right -= 1
#             current += 1  # Line B

#     return nums


# # For input [2,0,2,1,1,0], this produces [0,0,2,1,1,2] instead of [0,0,1,1,2,2].

# Tasks: 
# 1. Identify the bug in the algorithm 
# 2. Explain why Line A or Line B causes the incorrect behavior 
# 3. Provide the corrected implementation 
def sort_colors(nums):
    left, current, right = 0, 0, len(nums) - 1

    while current <= right:
        if nums[current] == 0:  # Red
            nums[left], nums[current] = nums[current], nums[left]
            left += 1
            current += 1  # Line A is correct here
        elif nums[current] == 1:  # White
            current += 1
        else:  # Blue (nums[current] == 2)
            nums[current], nums[right] = nums[right], nums[current]
            right -= 1
            # Line B should not increment current here
            # current += 1 

    return nums
# The bug in the algorithm is that when a blue (2) is encountered, the current index is incremented after swapping with the right index. This can skip over a newly swapped value that needs to be checked again.
# The corrected implementation should not increment `current` after swapping with `right`, as the new value at `current` needs to be checked again in the next iteration.
# The corrected implementation ensures that the current index is only incremented when a red (0) is found, while blue (2) values are swapped and the current index remains unchanged to recheck the new value at that position.
