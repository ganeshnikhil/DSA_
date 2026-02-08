def binary_search(nums, target):
    """
    Fixed Binary Search Function
    """

    # Task 1: Bug Identification
    # The issue was in the initial setup of 'right' and in the update of 'left'.
    # Original code had: right = len(nums), which is wrong.
    # Also, left = mid (without adding 1) could cause an infinite loop.

    # Task 2: Why it was a problem
    # If we just write 'left = mid', and mid == left, then we're stuck.
    # It won't move forward. Same for 'right = len(nums)', it can go out of bounds.

    # Task 3: Final working code
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


