import re

def is_advanced_palindrome(s: str) -> bool:
    cleaned = re.sub(r'[^a-zA-Z0-9]', '', s).lower()
    return cleaned == cleaned[::-1]

# Example test cases
print(is_advanced_palindrome("A man, a plan, a canal: Panama"))  # True
print(is_advanced_palindrome("race a car"))                      # False
print(is_advanced_palindrome("Was it a car or a cat I saw?"))    # True
