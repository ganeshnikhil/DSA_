def search_rotated_array(nums, target):
    low = 0
    high = len(nums) - 1

    while low <= high:
        mid = (low + high) // 2

        if nums[mid] == target:
            return mid

        if nums[low] <= nums[mid]:
            if nums[low] <= target < nums[mid]:
                high = mid - 1
            else:
                low = mid + 1
        else:
            if nums[mid] < target <= nums[high]:
                low = mid + 1
            else:
                high = mid - 1

    return 0
nums = list(map(int, input().split()))#taking input from the user
target = int(input())
print(search_rotated_array(nums, target))
#for exampple:- Input: 4 5 6 7 0 1 2
#              Target: 0
# Output: 4