#: Find the first occurrence of a target element in sorted array with duplicates.

arr = list(map(int, input("enter list :").split()))
target = int(input("enter number :"))

low = 0
high = len(arr) - 1
first_occurrence = -1

while low <= high:
    mid = (low + high) // 2
    if arr[mid] == target:
        first_occurrence = mid
        high = mid - 1  
    elif arr[mid] < target:
        low = mid + 1
    else:
        high = mid - 1

print(first_occurrence)
