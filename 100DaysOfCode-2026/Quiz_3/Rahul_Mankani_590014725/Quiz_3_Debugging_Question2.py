def sort_colors(nums):
    left, current, right = 0, 0, len(nums) - 1

    while current <= right:
        if nums[current] == 0:  # Red
            # 0 ko left side pe le jaana hai
            nums[left], nums[current] = nums[current], nums[left]
            left += 1
            current += 1  # Line A: 0 ke baad agla element check karna chahiye
        elif nums[current] == 1:  # White
            current += 1  # 1 already correct position, sirf aage badhna
        else:  # Blue (nums[current] == 2)
            # 2 ko right side pe le jaana hai
            nums[current], nums[right] = nums[right], nums[current]
            right -= 1
            # Note: current ko increase nahi karte kyunki swapped element ko recheck karna hai
            # Isliye current ko kuch nahi badhate, sirf re-evaluate karte hain

    return nums
