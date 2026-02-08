def sortColors(arr):
    low = 0
    mid = 0
    high = len(arr) - 1

    while mid <= high:
        if arr[mid] == 0:
            arr[low], arr[mid] = arr[mid], arr[low]
            low += 1
            mid += 1
        elif arr[mid] == 1:
            mid += 1
        else:  # arr[mid] == 2
            arr[mid], arr[high] = arr[high], arr[mid]
            high -= 1

    return arr

input_str = input("Enter the list of numbers (only 0, 1, 2) separated by spaces: ")
nums = list(map(int, input_str.strip().split()))

if all(num in (0, 1, 2) for num in nums):
    sorted_nums = sortColors(nums)
    print("Sorted array:", sorted_nums)
else:
    print("Invalid input. Please enter only 0, 1, and 2.")
