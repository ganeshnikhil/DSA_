# Prompt the user to enter the elements of array
my_array = list(map(int, input("Enter the elements (give space between every element): ").strip().split()))

target_value = int(input("Enter the number you want to count in the array: "))

count = 0  # Help to find the target value frequency count

for num in my_array:
    if target_value == num:
        count += 1

if count == 0:
    print("-1")  # Number is not found in array
else:   
    print(f"The target value appears in the array {count} times.")