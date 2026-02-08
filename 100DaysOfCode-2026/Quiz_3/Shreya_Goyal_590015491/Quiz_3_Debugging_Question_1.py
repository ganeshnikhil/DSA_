def binary_search(nums, target):
    left, right = 0, len(nums)-1  # Line 1

    while left < right:  # Line 2
        mid = (left + right) // 2
        if nums[mid] == target:
            return mid
        elif nums[mid] < target:
            left = mid+1  # Line 3
        else:
            right = mid - 1  # Line 4
    return -1

#Lines causing bug: Line 1 and Line 3
#This causes infinite loop because left = mid keeps checking the same spot again and again 
