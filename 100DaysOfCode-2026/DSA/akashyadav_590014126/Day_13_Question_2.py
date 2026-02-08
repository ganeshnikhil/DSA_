from collections import Counter

def can_form_palindrome(s):

    freq = Counter(s)   # to count frequency of each letter
    
    odd_count = sum(1 for count in freq.values() if count % 2 != 0)
    
    return odd_count <= 1

#example
print(can_form_palindrome("aabbcc"))   # True
