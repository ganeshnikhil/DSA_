#1)The bug is in Line B(current += 1) as it executes immediately after swapping a 2 to the right
#2)This causes incorrect behavior because the new element at nums[current] has not yet been evaluated
#and through this we skip checking the newly swapped-in element
#3)

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

    return nums

#User input check
input_str = input("Enter a list of 0s, 1s, and 2s separated by spaces: ")
nums = list(map(int, input_str.strip().split()))

sorted_nums = sort_colors(nums)

print("Sorted Colors:", sorted_nums)
