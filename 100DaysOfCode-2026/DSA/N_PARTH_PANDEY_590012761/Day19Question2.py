def findPeakElement(nums):
    left, right = 0, len(nums) - 1
    
    while left < right:
        mid = (left + right) // 2
        
        if nums[mid] > nums[mid + 1]:
            right = mid
        else:
            left = mid + 1
    
    return left


nums = [10, 20, 15, 2, 23, 90, 67]
print("Input Array:", nums)
print("Peak Element Index:", findPeakElement(nums))