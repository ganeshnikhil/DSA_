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
            current += 1  # Line B

    return nums

# 1. Bug is in line B.

# 2. If we swap nums[current] with nums[right] and then increment current, we skip the value that comes from the right. That is why the output for [2,0,2,1,1,0] comes as [0,0,2,1,1,2] — the middle values get skipped.

# 3. Correct Implementation

def sort_colors(nums):
    left, current, right = 0, 0, len(nums) - 1

    while current <= right:
        if nums[current] == 0:  # Red
            nums[left], nums[current] = nums[current], nums[left]
            left += 1
            current += 1  # Line A
        elif nums[current] == 1:  # White
            current += 1
        else:  # Blue
            nums[current], nums[right] = nums[right], nums[current]
            right -= 1



