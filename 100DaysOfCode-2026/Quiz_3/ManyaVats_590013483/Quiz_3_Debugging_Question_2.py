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

1. The bug is in Line B (current += 1 after swapping with right).

2. It causes incorrect behavior because it skips checking the new value placed at current after the swap.

3. Fix it by removing current += 1 from Line B, so the swapped value is properly checked in the next iteration.









