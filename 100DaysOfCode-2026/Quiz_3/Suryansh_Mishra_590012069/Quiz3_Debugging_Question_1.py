def binary_search(nums, target):
    left, right = 0, len(nums) - 1  # Fixed Line 1

    while left <= right:  # Also changed to <= to include right end
        mid = (left + right) // 2
        if nums[mid] == target:
            return mid
        elif nums[mid] < target:
            left = mid + 1  # Fixed Line 3
        else:
            right = mid - 1  # Line 4 is fine
    return -1
