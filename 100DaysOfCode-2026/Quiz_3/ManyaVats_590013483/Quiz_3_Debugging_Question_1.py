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
  
1. Buggy lines: Line 1 (right = len(nums)) and Line 3 (left = mid).

2. Reason: Line 1 causes out-of-bounds access; Line 3 can cause infinite loops by not shrinking the search space.

3. Fix: Change right = len(nums) - 1, left = mid + 1, and use while left <= right.
