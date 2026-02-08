#ques 1
#mistake is in line B the code increments current after swapping. That leads the algorithm to skip evaluating the new element brought into nums[current]
#ques 2
#When you swap with the right segment (blue zone), the incoming item at current is unprocessed: it could be 0, 1, or 2. If you then do current += 1, you never examine that element, leaving it potentially out of place
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
