# Buggy version
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
            current += 1  # Bug: don't increment here

# 1. Bug
# - current += 1 after swapping with right is wrong — the new value at nums[current] is unknown and must be rechecked

# 2. Input: [2, 0, 2, 1, 1, 0]
# Expected output: [0, 0, 1, 1, 2, 2]
# Buggy output: [0, 0, 2, 1, 1, 2] — incorrect

# 3. Problem: current skips over newly swapped value which may be 0 or 1

# 4. Corrected version
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
            # Don't increment current here
