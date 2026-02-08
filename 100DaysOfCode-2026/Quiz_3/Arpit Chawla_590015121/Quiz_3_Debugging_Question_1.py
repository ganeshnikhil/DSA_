Task 1: Identify the specific line(s) causing the bug

right = len(nums)        #  Line 1: Should be len(nums) - 1
left = mid               #  Line 3: Should be mid + 1


Task 2. Explain why this causes infinite loops or incorrect results 

 right = len(nums)
* In Python, arrays start from index 0, so for an array of size 5, the last valid index is 4.
* Setting right = len(nums) means you're allowing the loop to check index 5, which doesn’t exist — this can cause an IndexError or skip the correct result.

 left = mid
* If mid is not the target and you do left = mid, there’s a chance you don’t move forward, especially when left == mid.
* This creates a situation where the loop keeps checking the same element again and again, causing an infinite loop or missing the target.


Task 3: Provide the corrected implementation

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

