def can_form_palindrome(s):
    from collections import Counter
    counts = Counter(s)
    odd_count = sum(1 for c in counts.values() if c % 2 != 0)
    return odd_count <= 1

s = input()
print(can_form_palindrome(s))
