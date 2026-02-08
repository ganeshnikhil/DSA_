#1. This loop iterates over the keys of char_count, not over the original string.
#dictionary may not gurantee string order which leads to returning the wrong index for the first non-repeating character.
def first_non_repeating(s):
    char_count = {}

    # Count frequencies
    for char in s:
        char_count[char] = char_count.get(char, 0) + 1

    # Check in the order of original string
    for idx, char in enumerate(s):
        if char_count[char] == 1:
            return idx

    return -1
