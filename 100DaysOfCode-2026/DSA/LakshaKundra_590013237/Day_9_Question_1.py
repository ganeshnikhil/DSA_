def is_palindrome(s):
    
    cleaned = ''.join(char.lower() for char in s if char.isalpha())
    
    return cleaned == cleaned[::-1]

user_input = input("Enter a string: ")

if is_palindrome(user_input):
    print("true")
else:
    print("false")
