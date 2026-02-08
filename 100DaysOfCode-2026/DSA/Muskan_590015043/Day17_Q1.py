# 1. Binary Search Implementation
def binary_search(arr, target):
    left = 0
    right = len(arr) - 1

    while left <= right:
        mid = (left + right) // 2  # Calculate the middle index

        if arr[mid] == target:
            return mid  # Target found, return its index
        elif arr[mid] < target:
            left = mid + 1  # Target is in the right half, adjust left pointer
        else:
            right = mid - 1  # Target is in the left half, adjust right pointer
    
    return -1  # Target not found in the list

my_list = list(map(int,input("Enter the array elemnts seperated by space: ").split()))
my_list.sort()
search_target = int(input("Enter the target: "))

result_index = binary_search(my_list, search_target)

if result_index != -1:
    print(f"{result_index}")
else:
    print("-1")
