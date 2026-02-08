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
            # Do NOT increment current here

    return nums

nums = list(map(int, input("Enter list of 0s, 1s, and 2s (space-separated): ").split()))
sorted_nums = sort_colors(nums)
print("Sorted colors:", sorted_nums)