# Implement binary search for finding elements in sorted arrays
my_array = list(map(int, input("Enter the elements (give space between them): ").strip().split()))
target_value = int(input("Enter the number you want to find in array: "))

my_array.sort()  # Sorting the provided array
print(f"Sorted array: {my_array}")

def binary_search(arr, target):
    left = 0
    right = len(arr) - 1
    
    while left <= right:
        mid = (left + right) // 2
        
        if arr[mid] == target:
            return mid
        elif arr[mid] < target:
            left = mid + 1  # Search in right half
        else:
            right = mid - 1  # Search in left half
    
    return -1  # Element not found

# Perform binary search
result = binary_search(my_array, target_value)

if result != -1:
    print(f"The index of target value is: {result}")
else:
    print("-1")  # Element is not found in array