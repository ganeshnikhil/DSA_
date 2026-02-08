#Question2:
'''Dutch National Flag Algorithm Bug:
A student implemented the Dutch National Flag algorithm (three-color sorting) but it's producing incorrect results.
Analyze the code:   

  def sort_colors(nums):
    left, current, right = 0, 0, len(nums) - 1

    while current <= right:
        if nums[current] == 0:  # Red
            nums[left], nums[current] = nums[current], nums[left]
            left += 1
            current += 1  # Line A
        elif nums[current] == 1:  # White
            current += 1
        else:  # Blue (nums[current] == 2)
            nums[current], nums[right] = nums[right], nums[current]
            right -= 1
            current += 1  # Line B

    return nums


# For input [2,0,2,1,1,0], this produces [0,0,2,1,1,2] instead of [0,0,1,1,2,2].

Tasks: 
1. Identify the bug in the algorithm 
2. Explain why Line A or Line B causes the incorrect behavior 
3. Provide the corrected implementation'''




#Answer2:
#Task 1: Identify the bug in the algorithm.
'''Answer:
The bug is in the line:
current += 1  # Line B (inside the block for nums[current] == 2)'''



#Task 2: Explain why Line A or Line B causes the incorrect behavior.
'''Answer:
The purpose of the Dutch National Flag algorithm is to sort an array of 0s, 1s, and 2s in a single pass by using three pointers: left, current, and right.

When nums[current] == 2, the value at current is swapped with the value at right, and then right is decreased.

However, if we immediately increase current after the swap (as in Line B), we skip rechecking the new value that has come into the current position from the right.

This is problematic because the new value might be a 0 or another 2 that also needs to be moved — and we miss handling it, resulting in incorrect sorting.

Therefore, Line B should not increment current. The algorithm must re-evaluate the value at current after the swap.'''



#Task 3: Provide the corrected implementation.
'''Answer:'''
# User-defined Dutch National Flag algorithm

def sort_colors(nums):
    left = 0               # Start of array, where 0s go
    current = 0            # Current element being evaluated
    right = len(nums) - 1  # End of array, where 2s go

    while current <= right:
        if nums[current] == 0:
            # Swap current with left
            temp = nums[current]
            nums[current] = nums[left]
            nums[left] = temp
            left += 1
            current += 1  # Move forward only after placing 0

        elif nums[current] == 1:
            # 1 is already in the correct zone, just move on
            current += 1

        elif nums[current] == 2:
            # Swap current with right
            temp = nums[current]
            nums[current] = nums[right]
            nums[right] = temp
            right -= 1
            # Do NOT increase current; we need to check the swapped value

    return nums


