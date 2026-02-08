def check_palindrome(text):
  
    cleaned = ''.join(char.lower() for char in text if char.isalpha())
    
    return cleaned == cleaned[::-1]

input_string = input("Enter a string: ")
print(check_palindrome(input_string))
