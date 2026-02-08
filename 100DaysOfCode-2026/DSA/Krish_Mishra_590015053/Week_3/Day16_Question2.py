def count_frequency(array, target):
    count = 0
      for num in array:
 if num == target:
  count += 1
    return count
user_input = input("Enter the elements of the array separated by spaces: ")
array = list(map(int, user_input.split()))
target = int(input("Enter the target element to count: "))
frequency = count_frequency(array, target)
print(f"The target value {target} appears {frequency} time(s) in the array.")
