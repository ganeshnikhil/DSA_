# Character Count

# Get string input from user
user_string = input("Enter a string: ")

# Get character input from user
character = input("Enter the character to count: ")

# Check character length is 1
if len(character) != 1:
    print("Please enter a single character.")
else:
    # Count occurrences
    count = user_string.count(character)
    print(f"The character '{character}' appears {count} time(s) in the string.")