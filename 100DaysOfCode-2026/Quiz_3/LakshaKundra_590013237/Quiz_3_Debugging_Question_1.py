#right = len(nums) — should be len(nums) - 1
#left = mid — should be mid + 1

#right = len(nums) makes right out of bounds for indexing (nums[len(nums)] is invalid).
#left = mid does not advance the search if mid == left, leading to infinite loop especially in small subarrays.

#code
def binary_search(nums, target):
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
