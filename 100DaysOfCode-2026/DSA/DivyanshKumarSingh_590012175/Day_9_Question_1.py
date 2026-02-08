def isPalindrome(s):
    str = ''.join(char.lower() for char in s if char.isalpha())
    
    return str == str[::-1]

inp = input("Enter a string to check if it's a palindrome: ")

print(isPalindrome(inp))
    
