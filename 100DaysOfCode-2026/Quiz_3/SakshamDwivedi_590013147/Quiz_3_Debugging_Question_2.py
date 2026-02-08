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
            #current += 1  # Line B
            '''We don't increment current when it's blue as when it is swapped we don't know what value
                is swapped so if it is incremented we leave the swapped value unchecked''' 

    return nums

print(sort_colors([2,0,2,1,1,0]))
