def binary_search(nums, target):
    left, right = 0, len(nums) - 1 # Line 1 (Should be len(nums) - 1 otherwise it will be out of index)

    while left <= right:  # Line 2 (This should be left <= right rather than left < right for full comparision)
        mid = (left + right) // 2 # Although this is correct mid = left + (right - left) // 2 is good for preventing overflow
        if nums[mid] == target:
            return mid
        elif nums[mid] < target:
            left = mid + 1 # Line 3 (This should be mid + 1, otherwise might cause infinite loop)
            '''This could cause an infinite loop as if there was a small range [0, 1], and left is 0 then mid
            would be (0 + 1) // 2 = 0, which would make left = 0 again instead of shrinking the search size'''
        else:
            right = mid - 1  # Line 4
    return -1

nums = [1, 2, 3, 4, 5, 6]
target = 4
print(binary_search(nums, target))
