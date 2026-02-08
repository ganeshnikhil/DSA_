import re

def is_palindrome(s):
    cleaned = re.sub(r'[^a-zA-Z]', '', s).lower()
    return cleaned == cleaned[::-1]


print(is_palindrome("racecar"))     
print(is_palindrome("hello"))       
print(is_palindrome("Madam"))       
