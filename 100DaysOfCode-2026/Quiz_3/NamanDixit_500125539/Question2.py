#1. current += 1  # Line B
#2. This causes some 2s or 0s to remain unsorted, leading to incorrect results.\

#3. correct implementation
def sort_colors(nums):
    left, current, right = 0, 0, len(nums) - 1

    while current <= right:
        if nums[current] == 0:
            nums[left], nums[current] = nums[current], nums[left]
            left += 1
            current += 1  #Line A is fine
        elif nums[current] == 1:
            current += 1
        else:  # nums[current] == 2
            nums[current], nums[right] = nums[right], nums[current]
            right -= 1
            # Don't increment current here

    return nums

def main():
    n = int(input("Enter the number of elements: "))
    
    print("Enter the elements (only 0s, 1s, and 2s):")
    nums = list(map(int, input().split()))

    # If fewer than n elements were entered in one line
    while len(nums) < n:
        nums += list(map(int, input().split()))

    sorted_nums = sort_colors(nums)

    print("Sorted array:")
    print(" ".join(map(str, sorted_nums)))

# Call the main function
main()
