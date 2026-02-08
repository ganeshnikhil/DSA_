def can_form_palindrome(s):
    from collections import Counter
    freq = Counter(s)
    odd_count = sum(1 for count in freq.values() if count % 2 != 0)
    print(odd_count <= 1)

can_form_palindrome("aab")
can_form_palindrome("abc")
can_form_palindrome("aabbcc")
