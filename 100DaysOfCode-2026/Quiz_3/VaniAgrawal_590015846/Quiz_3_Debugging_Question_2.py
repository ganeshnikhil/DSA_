#bug line
#Line B: current += 1 is incorrect in the else

#When nums[current] == 2, we are swapping it with the right.
#But after the swap, the new value at current has not been processed yet.
#If you increment current, you skip checking this new swapped-in value.
#This leads to skipping elements and causes incorrect order, like [0,0,2,1,1,2] instead of [0,0,1,1,2,2].

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



