def can_form_palindrome(s):
    freq = {}
    for char in s:
        if char != ' ':
            freq[char] = freq.get(char, 0) + 1

    odd_count = 0
    for count in freq.values():
        if count % 2 != 0:
            odd_count += 1

    return odd_count <= 1

print(can_form_palindrome("aab"))     
print(can_form_palindrome("carerac"))
print(can_form_palindrome("abc"))     
