def sort_colors(nums):
    left, current, right = 0, 0, len(nums) - 1

    while current <= right:
        if nums[current] == 0:  #Red
            nums[left], nums[current] = nums[current], nums[left]
            left += 1
            current += 1
        elif nums[current] == 1:  #White
            current += 1
        else:  #Blue (nums[current] == 2)
            nums[current], nums[right] = nums[right], nums[current]
            right -= 1
            #do NOT increment current here — recheck the swapped-in value

    return nums
