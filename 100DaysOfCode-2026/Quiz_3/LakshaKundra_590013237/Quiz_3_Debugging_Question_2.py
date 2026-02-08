#bug is at current += 1

#When nums[current] == 2, you swap it with nums[right]
#Incrementing current unconditionally skips checking the newly swapped value — it could be 0, 1, or 2.

#correct code 
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
            right -= 1  # Do not increment current here

    return nums
  
