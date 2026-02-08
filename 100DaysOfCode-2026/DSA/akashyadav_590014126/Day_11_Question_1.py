import string

def is_palindrome(text):

    filtered = ''.join(char.lower() for char in text if char.isalnum()) #converting to lowercsase and removing alphanumeric characters
    
    return filtered == filtered[::-1]   #checking for palindrome

#example
print(is_palindrome("Was it a car or a cat I saw?"))    # Output: True