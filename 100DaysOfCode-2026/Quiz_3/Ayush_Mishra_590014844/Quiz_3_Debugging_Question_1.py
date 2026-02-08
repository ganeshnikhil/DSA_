def binary_search(nums, target):
    left, right = 0, len(nums) - 1  #fix:right should be the last valid index

    while left <= right:  #fix:include equality to check all elements
        mid = (left + right) // 2
        if nums[mid] == target:
            return mid
        elif nums[mid] < target:
            left = mid + 1  #fix:exclude mid since it's already checked
        else:
            right = mid - 1
    return -1
