from collections import Counter

def first_non_repeating_char(s):
    freq = Counter(s)
    for c in s:
        if freq[c] == 1:
            return c
    return -1

# Test cases
print(first_non_repeating_char("programming"))  # 'p'
print(first_non_repeating_char("aabbcc"))       # -1
print(first_non_repeating_char("abccba"))       # -1
