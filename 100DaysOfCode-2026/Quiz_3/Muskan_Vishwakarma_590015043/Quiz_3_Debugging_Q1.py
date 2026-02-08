def binary_search(nums, target):
    left = 0
    right = len(nums) - 1  # Proper variable assignment

    while left <= right:  # Also corrected: should be <= to cover all indices
        mid = (left + right) // 2
        if nums[mid] == target:
            return mid
        elif nums[mid] < target:
            left = mid + 1
        else:
            right = mid - 1
    return -1

nums = [12, 13, 1, 3, 0]
nums.sort()  # Binary search requires a sorted list
print(binary_search(nums, 13))
