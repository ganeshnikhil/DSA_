def binary_search(nums, target):
    left, right = 0, len(nums)  # Line 1

    while left < right:  # Line 2
        mid = (left + right) // 2
        if nums[mid] == target:
            return mid
        elif nums[mid] < target:
            left = mid + 1 # Line 3 (Bug Fixed!)
        else:
            right = mid - 1  # Line 4
    return -1


# [1] "Line 3" has bug (now fixed) which may cause infinite recursion when left == mid
# [2] Suppose the input is [32], in such a case, left == mid == 1,
#     and since we are not discarding the previous mid (left = mid) it will
#     result in left == mid == 1 everytime and cause infinite loop.
