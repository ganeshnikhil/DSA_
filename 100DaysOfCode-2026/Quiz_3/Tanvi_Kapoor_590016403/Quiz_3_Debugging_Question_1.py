def binary_search(nums, target):
    # Correct bounds: 'right' should be the last index (len(nums) - 1)
    left, right = 0, len(nums) - 1

    # Loop until the search space is exhausted
    while left <= right:
        mid = (left + right) // 2  # Calculate the middle index

        if nums[mid] == target:
            return mid             # Target found
        elif nums[mid] < target:
            left = mid + 1         # Search the right half
        else:
            right = mid - 1        # Search the left half

    return -1  # Target not found
