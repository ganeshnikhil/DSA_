Your task: Sort an integer array in ascending order using built-in sorting functions.

print("Welcome! This program will sort your numbers in ascending order.")

user_input = input("Enter numbers separated by spaces: ").strip()

if not user_input:
    print("You didn't enter any numbers.")
else:
    try:
        numbers = list(map(int, user_input.split()))
        numbers.sort()
        print("Here is your sorted list (from smallest to largest):")
        print(numbers)
    except ValueError:
        print("Please enter only numbers separated by spaces. Try again.")

