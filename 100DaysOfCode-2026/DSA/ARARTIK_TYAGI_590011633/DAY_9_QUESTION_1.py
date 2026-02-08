def is_palindrome(s):
    # Filter alphabetic characters and convert to lowercase
    filtered = ''.join(c.lower() for c in s if c.isalpha())
    return filtered == filtered[::-1]

# User input
user_input = input("Enter a string to check if it's a palindrome: ")
if is_palindrome(user_input):
    print("true")
else:
    print("false")