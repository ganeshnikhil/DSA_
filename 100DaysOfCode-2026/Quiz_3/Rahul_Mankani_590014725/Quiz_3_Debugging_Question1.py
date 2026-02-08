def binary_search(nums, target):
    # Start with the first index 0
    left = 0
    # End at the last valid index, not len(nums) which is out of bound
    right = len(nums) - 1  # Corrected from len(nums)

    # While the search space is valid (left <= right)
    while left <= right:  # Changed from left < right to include the last element
        mid = (left + right) // 2  # Mid index

        # If target found at mid
        if nums[mid] == target:
            return mid

        # Agar nums[mid] < target, toh target right side mein hai
        elif nums[mid] < target:
            # Wrong: left ko sirf mid set kar rahe the, which causes infinite loop
            # Correct: move left past mid to mid+1, taaki search daire se aage badhe
            left = mid + 1  # Corrected from left = mid

        else:
            # Agar nums[mid] > target, toh right side mein hai
            # This was correct, but be careful with the boundaries
            right = mid - 1  # Correct

    # Agar target nahi mila
    return -1
