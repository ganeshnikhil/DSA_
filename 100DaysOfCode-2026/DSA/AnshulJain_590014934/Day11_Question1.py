def is_advanced_palindrome(s):
    cleaned = ''.join(c.lower() for c in s if c.isalnum())
    return cleaned == cleaned[::-1]

# Example usage
text = "A man, a plan, a canal: Panama"
print(is_advanced_palindrome(text))
#Output: True
