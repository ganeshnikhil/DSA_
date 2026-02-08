from collections import Counter

def first_non_repeating(s):
    count = Counter(s)
    for char in s:
        if count[char] == 1:
            return char
    return -1


print(first_non_repeating("programming"))  
print(first_non_repeating("aabbcc"))       
print(first_non_repeating("abccba"))       
