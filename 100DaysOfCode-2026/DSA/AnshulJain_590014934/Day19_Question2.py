def find_peak_element(nums):
    low = 0
    high = len(nums) - 1

    while low < high:
        mid = (low + high) // 2

        if nums[mid] > nums[mid + 1]:
            high = mid
        else:
            low = mid + 1

    return low
nums = list(map(int, input().split()))#taking input from the user
print(find_peak_element(nums))
# Example input: 1 2 3 1
# Example output: 2 
