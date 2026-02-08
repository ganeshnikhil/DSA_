# Task 2: First Non-Repeating Character

def first_non_repeating(s):
    # Original bug:
    # Line A: Iterated over dictionary keys, which doesn’t guarantee order
    # Line B: Used s.index(char), which returns the first index even for repeated chars
    # Explanation:
    #   - The function may return incorrect results if character order is not preserved
    #   - It should iterate over the string directly, not the dictionary
    # Fix: Use enumerate(s) to maintain input order
    char_count = {}
    for char in s:
        char_count[char] = char_count.get(char, 0) + 1

    for i, char in enumerate(s):  # Fix: maintain order of original string
        if char_count[char] == 1:
            return i
    return -1

# Sample test

print(first_non_repeating("leetcode"))   # Expected: 0
print(first_non_repeating("loveleetcode")) # Expected: 2