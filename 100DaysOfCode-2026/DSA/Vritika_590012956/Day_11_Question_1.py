import string
def is_palindrome_spaces(text):
    # keep only alphanumeric characters
    normalized = ''.join(char.lower() for char in text if char.isalnum())
    #  Check if normalized string is equal to its reverse
    return normalized == normalized[::-1]

input_text = input("Enter a string: ")
if is_palindrome_spaces(input_text):
    print("It's a palindrome!")
else:
    print("It's not a palindrome.")
