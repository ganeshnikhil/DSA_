def binary_search(nums, target):
    left, right = 0, len(nums)  # Line 1

    while left < right:  # Line 2
        mid = (left + right) // 2
        if nums[mid] == target:
            return mid
        elif nums[mid] < target:
            left = mid  # Line 3
        else:
            right = mid - 1 # Line 4
    return -1

#the bug is in line 3, it should be "left=mid+1" not "left=mid"
#this bug triggers an infinite loop because it keeps checking the same element again and again
#corrected code:

def binary_search(nums, target):
    left, right = 0, len(nums)  # Line 1

    while left < right:  # Line 2
        mid = (left + right) // 2
        if nums[mid] == target:
            return mid
        elif nums[mid] < target:
            left = mid + 1 # Line 3
        else:
            right = mid - 1  # Line 4
    return -1
