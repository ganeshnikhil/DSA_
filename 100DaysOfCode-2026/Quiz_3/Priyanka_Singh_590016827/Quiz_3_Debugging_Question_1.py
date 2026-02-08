def binary_search(nums, target):
    left, right = 0, len(nums) - 1  # Fix: right should be last valid index

    while left <= right:  # Fix: Use <= to include rightmost index
        mid = (left + right) // 2
        if nums[mid] == target:
            return mid
        elif nums[mid] < target:
            left = mid + 1  # Fix: move past mid
        else:
            right = mid - 1
    return -1

nums = list(map(int, input("Enter sorted list of numbers (space-separated): ").split()))
target = int(input("Enter the target number to search: "))

result = binary_search(nums, target)

if result != -1:
    print(f"Target found at index {result}")
else:
    print("Target not found in the list.")