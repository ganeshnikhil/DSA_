# The bug :
# The bug is in Line B, where current += 1 is incorrect after swapping with right.

# Why Line B causes incorrect behaviour:
# When we swap a 2 with the number at the end (right), we don’t know what number came in — it could be 0, 1, or even another 2.

# correct implementation 
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

# Example 
print(sort_colors([2, 0, 2, 1, 1, 0]))
