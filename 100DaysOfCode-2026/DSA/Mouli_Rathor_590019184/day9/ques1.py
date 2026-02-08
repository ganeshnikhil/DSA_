def is_palindrome(s):
  
    filtered_chars = ''.join(char.lower() for char in s if char.isalpha())
    return filtered_chars == filtered_chars[::-1]

user_input = input("Enter a string to check if it's a palindrome: ")

result = is_palindrome(user_input)

print("\nResult:")
print(f"  {result}")
