import re

def palindrome(s):
    
    normalized_str = re.sub(r'[^a-zA-Z0-9]', '', s).lower()
   
    return normalized_str == normalized_str[::-1]

test_string = "A man, a plan, a canal: Panama"
if palindrome(test_string):
    print(f'"{test_string}" is a palindrome.')
else:
    print(f'"{test_string}" is not a palindrome.')
