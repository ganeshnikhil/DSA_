def is_palindrome(s):
    filtered = ''.join(c.lower() for c in s if c.isalpha())
    return filtered == filtered[::-1]
