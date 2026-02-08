def check_palindrome(s):

    converted = ''.join(char.lower() for char in s if char.isalpha())#converts to lowercase and removes non alphanumeric characters from string

    return converted == converted [::-1]#compares the converted string letters

#example
print(check_palindrome("Madam")) # True