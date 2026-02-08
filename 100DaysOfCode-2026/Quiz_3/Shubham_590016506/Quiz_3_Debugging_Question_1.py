def binary_search(nums, target):
    left, right = 0, len(nums) - 1  # right should be last valid index

    while left <= right:  # Use <= to include both ends
        mid = (left + right) // 2
        if nums[mid] == target:
            return mid
        elif nums[mid] < target:
            left = mid + 1  # move past mid to avoid infinite loop
        else:
            right = mid - 1
    return -1