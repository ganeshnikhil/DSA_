def sortColors(nums):
    low, mid, high = 0, 0, len(nums) - 1
    
    while mid <= high:
        if nums[mid] == 0:
            nums[low], nums[mid] = nums[mid], nums[low] 
            low += 1
            mid += 1
        elif nums[mid] == 1:
            mid += 1 
        else: 
            nums[mid], nums[high] = nums[high], nums[mid]  
            high -= 1  

user_input = input("enter the numbers (0s, 1s, 2s):")
nums = list(map(int, user_input.split()))
sortColors(nums)
print("sorted array:", nums)
