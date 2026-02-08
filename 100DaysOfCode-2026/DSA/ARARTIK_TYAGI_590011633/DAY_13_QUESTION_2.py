from collections import Counter

def can_form_palindrome(s):
    s = ''.join(c.lower() for c in s if c.isalpha())
    freq = Counter(s)
    odd_count = sum(1 for count in freq.values() if count % 2 != 0)
    return odd_count <= 1

# User input
user_input = input("Enter a string to check for palindrome permutation: ")
print("true" if can_form_palindrome(user_input) else "false")