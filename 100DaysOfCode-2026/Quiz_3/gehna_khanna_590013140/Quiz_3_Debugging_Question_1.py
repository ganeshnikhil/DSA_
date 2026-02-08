#ques1
#Line 1 (right = len(nums)) sets right to one past the last valid index.
#Line 3 (left = mid) moves the left bound to mid instead of past it.\
#ques2
#a) By initializing right = len(nums), you create a half-open interval [0, len). However, within the loop you access nums[mid], which becomes invalid when mid == len(nums).
#b) Infinite Loop from left = mid When nums[mid] < target, instead of moving past mid, left = mid keeps left unchanged if mid = left. This situation doesn’t shrink the search range, causing the loop to sometimes stall forever
def binary_search(nums, target):
    left, right = 0, len(nums) - 1

    while left <= right:
        mid = left + (right - left) // 2
        if nums[mid] == target:
            return mid
        elif nums[mid] < target:
            left = mid + 1        
        else:
            right = mid - 1       
    return -1
