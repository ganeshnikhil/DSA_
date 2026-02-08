1)
The problem is in Line B:
current += 1  # Line B  (This line appears inside the else block for nums[current] == 2.)

2)
When the current element is 2, the algorithm swaps it with nums[right], and immediately increments current.

This is a problem because:
After the swap, we don’t know what value came into nums[current].
It might be another 2, a 1, or even a 0.
If we move on too soon, we skip checking that new value.
This leads to unsorted values remaining in the array.


3)
  def sort_colors(nums):
    left, current, right = 0, 0, len(nums) - 1

    while current <= right:
        if nums[current] == 0:  # Red
            nums[left], nums[current] = nums[current], nums[left]
            left += 1
            current += 1
        elif nums[current] == 1:  # White
            current += 1
        else:  # Blue
            nums[current], nums[right] = nums[right], nums[current]
            right -= 1
            # Don't move current forward here!
            # Recheck what's now in nums[current]

    return nums

