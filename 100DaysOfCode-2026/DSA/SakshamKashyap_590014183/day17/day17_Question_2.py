# Implement binary search for finding elements in sorted arrays
my_array = list(map(int, input("Enter the elements (give space between them): ").strip().split()))
target_value = int(input("Enter the number you want to find in array: "))

my_array.sort()  # Sorting the provided array
print(f"Sorted array: {my_array}")

left = 0
right = len(my_array) - 1
result = -1

while left <= right:
    mid = (left + right)//2
    
    if my_array[mid] == target_value:
        result = mid
        right = mid - 1

    elif my_array[mid] < target_value:

        left = mid + 1
    
    elif my_array[mid] > target_value:

        right = mid - 1

    
if result != -1:
    print(f"he first occurrence of target value is: {result}")
else:
    print(result)
