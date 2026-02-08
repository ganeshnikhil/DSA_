#1)The lines which are causing the bugs are:
#Line 1:right should be equal to len(nums)-1
#Line 2:the condition should be while(left<=right),otherwise if the element is in the edges it won't be checked for availability
#Line 3:the line should be left=mid+1,to move mid if nums[mid] < target
#Line 4 will work when while(left<=right) is the condition

#2)
#Line 1 can cause Out-of-bounds or misses the last element
#Line 2 Skips edge elements; loop may terminate early or miss target
#Line 3 cause no forward progress because of left=mid creating an infinite loop if left==mid

#3)
def binary_search(nums, target):
    left, right =0, (len(nums)-1)  # Modified Line 1

    while left <= right:  # Modified Line 2
        mid = (left + right) // 2
        if nums[mid] == target:
            return mid
        elif nums[mid] < target:
            left = mid+1  # Modified Line 3
        else:
            right = mid - 1  # Line 4
    return -1


#User input check
input_list = input("Enter sorted integers separated by spaces: ")
nums = list(map(int, input_list.strip().split()))

target = int(input("Enter the number to search for: "))

result = binary_search(nums, target)

if result != -1:
    print(f"Target {target} found at index {result}.")
else:
    print(f"Target {target} not found in the list.")
