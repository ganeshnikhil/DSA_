#1. Buggy lines	Line 1: right = size + 1
#Line 3: left = mid
#2. Why it's wrong	Line 1 accesses out of bounds
#Line 3 may cause infinite loop
#3. Fixes	Use right = size - 1 and left = mid + 1



def binary_search(nums, target):
    left, right = 0, len(nums) - 1  # Line 1

    while left <= right:           # Line 2
        mid = (left + right) // 2
        if nums[mid] == target:
            return mid
        elif nums[mid] < target:
            left = mid + 1         # Line 3
        else:
            right = mid - 1        # Line 4
    return -1

# Main method
n = int(input("Enter the number of elements: "))

print(f"Enter {n} sorted elements:")
nums = list(map(int, input().split()))

# If not all elements were entered in one line
while len(nums) < n:
    nums += list(map(int, input().split()))

target = int(input("Enter the target to search: "))

index = binary_search(nums, target)

print(f"Index of {target} is: {index}")
