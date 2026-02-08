#The bug:
#In Line B, where current is incremented after swapping a 2 with nums[right]

#Explain why Line A or Line B causes the incorrect behavior ?
#When nums[current] == 0, swapping with nums[left] (which is either 0 or 1) ensures the new nums[current] is already processed, so incrementing current is safe.

#Corrected code:
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
    return nums