def is_palindrome(s):
    s = ''.join(c.lower() for c in s if c.isalpha())
    return s == s[::-1]

print(is_palindrome("Racecar"))            # True
print(is_palindrome("hello"))              # False
print(is_palindrome("A man, a plan, a canal: Panama"))  # True
