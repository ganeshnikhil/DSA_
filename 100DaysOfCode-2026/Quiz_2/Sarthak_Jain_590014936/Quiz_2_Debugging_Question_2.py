#Sarthak Jain 590014936

def first_non_repeating(s):
    char_count = {}
    # Count frequencies
    for char in s:
        char_count[char] = char_count.get(char, 0) + 1
    # Find first non-repeating character in order
    for idx, char in enumerate(s):
        if char_count[char] == 1:
            return idx
    return -1

"""
Tasks:

1. Bug identified:
   - Iterating over char_count (Line A) does not guarantee order of first occurrence.
   - s.index(char) (Line B) always returns first index of the character, not necessarily the current position.

2. Explanation:
   - The approach gives wrong results if the same character occurs multiple times at different positions.
   - It can return incorrect indices or skip characters.

3. Corrected implementation:
   - Iterate over s with enumerate() to preserve order.
   - Use char_count[char]==1 to check non-repetition.
"""
