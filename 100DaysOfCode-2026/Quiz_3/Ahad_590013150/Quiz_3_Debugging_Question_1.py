def binary_search(nums, target):
    left, right = 0, len(nums) - 1  # Right should be inclusive

    while left <= right:  # Use <= because right is inclusive
        mid = (left + right) // 2
        if nums[mid] == target:
            return mid
        elif nums[mid] < target:
            left = mid + 1  # Move right
        else:
            right = mid - 1  # Move left
    return -1
