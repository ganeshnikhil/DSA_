'''error 
The buggy lines are:
Line 1: right = len(nums)
  If you set right = len(nums), you risk accessing nums[len(nums)], which is out of bounds.

Line 3: left = mid
  If left = mid when nums[mid] < target, and mid equals left, left stays the same → infinite loop.

solution
  must do left = mid + 1 to move past mid.

'''

def binary_search(nums, target):
    left, right = 0, len(nums) - 1  # Set right to last valid index

    while left <= right:  # Allow equality to check the final element
        mid = (left + right) // 2
        if nums[mid] == target:
            return mid
        elif nums[mid] < target:
            left = mid + 1  # Move left past mid
        else:
            right = mid - 1  # Move right before mid
    return -1
