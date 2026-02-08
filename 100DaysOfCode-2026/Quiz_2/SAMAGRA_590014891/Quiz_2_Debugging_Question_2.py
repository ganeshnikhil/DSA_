# Problem:
# Bug is at Line A: 'for char in char_count' — this iterates in the order of dictionary keys, 
#    which does not preserve the original string order 
# Line B: Using 's.index(char)' is risky because if the character repeats in different positions, 
#    it always gives the index of the first occurrence, not necessarily the first non-repeating one.

#  Why incorrect:
# - The dictionary 'char_count' does not preserve the order of characters as they appear in the string 
# - The loop should check characters in the order of the string, not the order of the dictionary keys.

# Correct approach:
# - First, count character frequencies.
# - Then, iterate over the string (not the dictionary) to maintain order and check for the first char with count == 1.

#  Corrected Implementation:
def first_non_repeating(s):
    char_count = {}
    for char in s:
        char_count[char] = char_count.get(char, 0) + 1
    for idx, char in enumerate(s):
        if char_count[char] == 1:
            return idx
    return -1



print(first_non_repeating("swiss"))      
print(first_non_repeating("aabbcc"))   
print(first_non_repeating("racecars"))   
print(first_non_repeating(""))          
