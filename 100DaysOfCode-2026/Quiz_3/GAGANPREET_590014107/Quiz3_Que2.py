# 1. Identify the bug in the algorithm
#    --Line B: current += 1 after swapping with right
# 2. Explain why Line A or Line B causes the incorrect behavior 
#    --After swapping with nums[right], we don't know what value came in
#    --Incrementing current can skip over a 0 or 1, leading to incorrect sorting
# 3. Provide the corrected implementation   
def sort_colors(nums):
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
    return nums
