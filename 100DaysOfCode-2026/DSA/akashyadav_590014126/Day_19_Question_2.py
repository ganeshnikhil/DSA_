def find_peak_element(nums):
    left, right = 0, len(nums) - 1

    while left < right:
        mid = (left + right) // 2 

        if nums[mid] < nums[mid + 1]:
            left = mid + 1  # for peak element is in right half
        else:
            right = mid # for peak element is in left half 

    return left 

#example
print(find_peak_element([10,20,3,45,90,67]))