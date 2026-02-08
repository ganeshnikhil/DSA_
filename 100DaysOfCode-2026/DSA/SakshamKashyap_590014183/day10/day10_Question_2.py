# Prompt the user to enter the string
string = input("Enter the string: ")

# Function to remove leading and trailing spaces
def leading_and_trailing_spaces():
    return string.strip()

# Function to remove all spaces
def remove_all_space():
    return string.replace(" ", "")

# Function to convert multiple spaces to single space
def single_space():
    return ' '.join(string.split())

# Final Output
print(f"Remove all: '{remove_all_space()}', Trim: '{leading_and_trailing_spaces()}', Single space: '{single_space()}'")
