#The bug:
#1. right = len(nums)
#2. left = mid

#Reasons for infinite loops or incorrect results
'''If nums[mid] < target, left updates to mid instead of mid + 1.
This means left does not move past mid, causing the same mid to be recomputed repeatedly.
Example: nums = [1, 2, 3], target = 3
left=0, right=3 → mid=1 → nums[1] < 3 → left=1
Next iteration: left=1, right=3 → mid=2 → nums[2] == 3 (works here, but other cases fail).
Incorrect Search Range:
right = len(nums) (instead of len(nums)-1) means the search range includes an invalid index (nums[len(nums)] is out of bounds).'''

#Corrected code 
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


