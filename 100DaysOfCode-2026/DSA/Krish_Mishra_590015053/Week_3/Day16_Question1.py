def linear_search(array, target):
    for index in range(len(array)):
        if array[index] == target:
            return index
    return -1
user_input = input("Enter the elements of the array separated by spaces: ")
array = list(map(int, user_input.split()))
target = int(input("Enter the target element to search: "))
result = linear_search(array, target)
if result != -1:
    print(f"Target found at index {result}")
else:
    print("Target not found in the array.")
