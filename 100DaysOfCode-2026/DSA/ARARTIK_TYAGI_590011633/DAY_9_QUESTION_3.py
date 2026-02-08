from collections import Counter
def first_non_repeating_char(s):
    freq = Counter(s)
    for char in s:
        if freq[char] == 1:
            return char
    return -1

# User input
user_input = input("Enter a string: ")
result = first_non_repeating_char(user_input)
print(f"Output: {result}")