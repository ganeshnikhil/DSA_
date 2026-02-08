#Task 1
The bug is in Line B:
 current += 1 

#Task 2
When you swap nums[current] with nums[right], the value at nums[current] could still be a 0 or 2 (i.e., not yet sorted).
By immediately incrementing current, the algorithm skips rechecking this new element.
This leads to incorrect sorting — for example, [2,0,2,1,1,0] becomes [0,0,2,1,1,2] (white 1s not in correct position).

#Task 3

def sort_colors(nums):
    left, current, right = 0, 0, len(nums) - 1
    while current <= right:
        if nums[current] == 0:
            nums[left], nums[current] = nums[current], nums[left]
            left += 1
            current += 1
        elif nums[current] == 1:
            current += 1
        else: 
            nums[current], nums[right] = nums[right], nums[current]
            right -= 1    
    return nums                                                                           
