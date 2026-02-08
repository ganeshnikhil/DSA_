def is_palindrome(text):
  
    cleaned = ''.join(char.lower() for char in text if char.isalpha())
    
    return cleaned == cleaned[::-1]

input_string = input("Enter a string: ")
print(is_palindrome(input_string))
