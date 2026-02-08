def binary_search(nums, target):
    left, right = 0, len(nums)  # Line 1

    while left < right:  # Line 2
        mid = (left + right) // 2
        if nums[mid] == target:
            return mid
        elif nums[mid] < target:
            left = mid  # Line 3
        else:
            right = mid - 1  # Line 4
    return -1
'''
Tasks: 
1. Identify the specific line(s) causing the bug 
Line 1 , it should be len(nums) -1
Line 2 , it shoudl be left<= right
Line 3 , it should be mid + 1
2. Explain why this causes infinite loops or incorrect results 
Line 1 , will cause indexing error. For example there are 5 elements it will check nums[5] which doesn't exist.
Line 2 , In case of left being equal to right the loop wont work but i should as it's possible.
Line 3 , After checking the first case we know the element doesnt exits at mid so we can directly use mid+1.
3. Provide the corrected implementation  
It's Given below
'''
def binary_search(nums, target):
    left, right = 0, len(nums)-1  # Line 1

    while left <= right:  # Line 2
        mid = (left + right) // 2
        if nums[mid] == target:
            return mid
        elif nums[mid] < target:
            left = mid+1  # Line 3
        else:
            right = mid - 1  # Line 4
    return -1
