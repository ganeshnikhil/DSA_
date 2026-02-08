from collections import Counter

def can_form_palindrome(s):
    freq = Counter(s)
    odd_count = sum(1 for count in freq.values() if count % 2)
    return odd_count <= 1

# Example usage
print(can_form_palindrome("aab"))   # True
print(can_form_palindrome("abc"))   # False
