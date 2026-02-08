def binary_search(nums, target):
    left, right = 0, len(nums)-1 # Line 1

    while left < right:  # Line 2
        mid = (left + right) // 2
        if nums[mid] == target:
            return mid
        elif nums[mid] < target:
            left = mid+1 # Line 3
        else:
            right = mid - 1  # Line 4
    return -1
#errors:len(nums)-1 should be there instead of len(nums)
#left=mid+1 should be there
# infinite loop because of len(nums)