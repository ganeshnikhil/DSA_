Task 1: Identify the bug in the algorithm

The bug is in Line B:
current += 1      # This should NOT happen after swapping with `right`


Task 2: Explain why Line A or Line B causes incorrect behavior
Why Line B is the problem:
* When you swap nums[current] with nums[right], the element that comes into the current position from the right side is unknown — it could be 0, 1, or 2.
* By immediately doing current += 1, you're skipping this new value without checking it.
* That’s why some values don’t get sorted correctly — you miss checking them.

Why Line A is fine:
When swapping a 0 to the left side, you're bringing in an already-processed or earlier value from the left, so it's safe to move current forward.


✅ Task 3: Provide the corrected implementation

def sort_colors(nums):
    left, current, right = 0, 0, len(nums) - 1

    while current <= right:
        if nums[current] == 0:
            nums[left], nums[current] = nums[current], nums[left]
            left += 1
            current += 1
        elif nums[current] == 1:
            current += 1
        else:  # nums[current] == 2
            nums[current], nums[right] = nums[right], nums[current]
            right -= 1  # ✅ Don't move current here

    return nums

