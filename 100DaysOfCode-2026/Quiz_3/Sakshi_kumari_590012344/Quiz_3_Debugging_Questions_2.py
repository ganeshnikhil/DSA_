1. Identify the bug in the algorithm?
The bug is in Line B: "current += 1", after swapping a 2 with the element at right.


2. Explain why Line A or Line B causes the incorrect behavior?
In the else part, when nums[current] == 2, the code swaps nums[current] with nums[right] and then increases current right after.
But the issue is — after the swap, we don’t know what value is now at the current position. It could be a 0, 1, or even another 2.
If we move current forward without checking, we might skip an element that still needs to be sorted.
That’s why we should not increase current here. We should just reduce right and let the loop check the new value at current again in the next iteration.
That’s how we make sure we don’t miss anything.


3. Provide the corrected implementation.
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



