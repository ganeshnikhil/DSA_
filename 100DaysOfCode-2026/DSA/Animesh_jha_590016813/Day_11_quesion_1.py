def is_palindrome(s):
    
    filtered = ''.join(char.lower() for char in s if char.isalnum())
    return filtered == filtered[::-1]

input_string = "was it a car or a cat I saw"
print(is_palindrome(input_string))
