'''1.bugged line:
Line 1: right = len(nums) should be right = len(nums) - 1.
Line 3: left = mid should be left = mid + 1.
2.Explain why this causes infinite loops or incorrect results:

The initialization of right to len(nums) means that the right boundary is set one index beyond the last valid index of the array. This can lead to an out-of-bounds access when calculating mid if left and right are equal, causing incorrect behavior.
In Line 3, setting left = mid does not eliminate the current mid from consideration in the next iteration, which can lead to an infinite loop if nums[mid] is less than target and target is not found in the array'''

def binary_search(nums, target):
    left, right = 0, len(nums) - 1  #Corrected Line 1

    while left <= right:  #Corrected Line 2
        mid = (left + right) // 2
        if nums[mid] == target:
            return mid
        elif nums[mid] < target:
            left = mid + 1  #Corrected Line 3
        else:
            right = mid - 1  #Line 4 remains unchanged
    return -1
