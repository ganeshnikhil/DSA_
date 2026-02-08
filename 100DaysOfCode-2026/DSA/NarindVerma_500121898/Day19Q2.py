def find_peak_element(nums):
    left, right = 0, len(nums) - 1

    while left < right:
        mid = (left + right) // 2
        if nums[mid] > nums[mid + 1]:
            right = mid  # Peak is on the left side (including mid)
        else:
            left = mid + 1  # Peak is on the right side
    return left
