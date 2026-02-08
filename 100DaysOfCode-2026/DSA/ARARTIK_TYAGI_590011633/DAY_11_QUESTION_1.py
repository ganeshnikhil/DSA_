def is_advanced_palindrome(s):
    filtered = ''.join(c.lower() for c in s if c.isalnum())  # Keep letters and digits only
    return filtered == filtered[::-1]

# User input
user_input = input("Enter a string to check for advanced palindrome: ")
print("true" if is_advanced_palindrome(user_input) else "false")