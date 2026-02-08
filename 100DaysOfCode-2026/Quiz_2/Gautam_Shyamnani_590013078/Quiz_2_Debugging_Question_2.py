#Function returns the index of the first non-repeating character in a string by first counting how many times each character occur,then scanning the string again to find the first character that appears exactly once
def first_non_repeating(s):
    char_count = {}
    for char in s:
        char_count[char] = char_count.get(char, 0) + 1

    for i, char in enumerate(s):
        if char_count[char] == 1:
            return i
    return -1
