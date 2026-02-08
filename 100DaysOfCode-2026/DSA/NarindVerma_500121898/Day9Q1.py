def is_palindrome(s):
    filtered = ''.join(c.lower() for c in s if c.isalpha())
    return filtered == filtered[::-1]

# Test cases
print(is_palindrome("racecar"))   # True
print(is_palindrome("hello"))     # False
print(is_palindrome("Madam"))     # True
