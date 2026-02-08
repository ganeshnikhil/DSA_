def binary_search(arr, target):
    left = 0
    right = len(arr) - 1
    while left <= right:
        mid = (left + right) // 2
        if arr[mid] == target:
            return mid
        elif arr[mid] < target:
            left = mid + 1
        else:
            right = mid - 1
    return 0
arr = list(map(int, input().split())) #taking input from the user 
target = int(input())
result = binary_search(arr, target)
print(result)
#for example
# Input: 1 2 3 4 5
#  target is 3
# Output: 2
