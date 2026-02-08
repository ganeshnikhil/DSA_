def dutch_national_flag_sort(arr):
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
        else:
            arr[mid], arr[high] = arr[high], arr[mid]
            high -= 1
    return arr
user_input = input("Enter numbers (0, 1, 2 only) separated by spaces: ")
arr = list(map(int, user_input.split()))
sorted_arr = dutch_national_flag_sort(arr)
print("Sorted array:", sorted_arr)
