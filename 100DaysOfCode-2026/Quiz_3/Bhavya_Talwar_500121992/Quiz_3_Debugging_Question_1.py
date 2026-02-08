def binary_search(nums, target):
    left, right = 0, len(nums)  # Line 1 should be len(nums)-4

    while left < right:  # Line 2 should be left<=right
        mid = (left + right) // 2
        if nums[mid] == target:
            return mid
        elif nums[mid] < target:
            left = mid  # Line 3 should be left=mid+1;
        else:
            right = mid - 1  # Line 4
    return -1

# 1. Bugs are in Line 1,2,3

# 2. right = len(nums) goes out-of-bound index.
# left = mid does not reduce the search space if mid==left which will result in infinite loop.
# The above can lead to:
# Incorrect output
# Infinite loop when left == mid == right.

# 3. Correct Implememtation
# def binary_search(nums, target):
    left, right = 0, len(nums) - 1  

    while left <= right:
        mid = (left + right) // 2
        if nums[mid] == target:
            return mid
        elif nums[mid] < target:
            left = mid + 1  
        else:
            right = mid - 1
    return -1
