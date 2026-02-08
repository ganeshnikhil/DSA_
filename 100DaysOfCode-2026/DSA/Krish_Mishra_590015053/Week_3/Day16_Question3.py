def find_maximum(array):
    max_value = array[0]
    for num in array:
        if num > max_value:
            max_value = num
    return max_value
user_input = input("Enter the elements of the array separated by spaces: ")
array = list(map(int, user_input.split()))
if len(array) == 0:
    print("Array is empty. Cannot determine maximum value.")
else:
    max_element = find_maximum(array)
    print(f"The maximum element in the array is: {max_element}")
