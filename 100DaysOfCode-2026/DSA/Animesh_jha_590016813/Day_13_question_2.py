def can_form_palindrome(s):
    from collections import Counter

    freq = Counter(s)

    odd_count = sum(1 for count in freq.values() if count % 2 != 0)

    return odd_count <= 1

input_str = "aabbcc"
print(can_form_palindrome(input_str))
