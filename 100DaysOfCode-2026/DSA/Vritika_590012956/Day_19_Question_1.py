def search_rotated_array(nums, target):
    left, right = 0, len(nums) - 1

    while left <= right:
        mid = (left + right) // 2

        if nums[mid] == target:
            return mid

        # Left half 
        if nums[left] <= nums[mid]:
            if nums[left] <= target < nums[mid]:
                right = mid - 1
            else:
                left = mid + 1
      
      # Right half 
        else:
            if nums[mid] < target <= nums[right]:
                left = mid + 1
            else:
                right = mid - 1
    return -1


arr = list(map(int, input("Enter the rotated sorted array (space-separated): ").split()))
target = int(input("Enter the target value: "))
result = search_rotated_array(arr, target)
print("Output:", result)
