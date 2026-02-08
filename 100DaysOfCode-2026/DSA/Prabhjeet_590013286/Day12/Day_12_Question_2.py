# Problem 2: Remove Duplicate Characters
# Given a string, remove all duplicate characters
# while preserving the order of their first appearance.
# Useful for cleaning and preprocessing text.
# Example: "programming" → "progamin"
def func(s):
    seen = set()
    result = ''
    for ch in s:
        if ch not in seen:
            seen.add(ch)
            result += ch
    return result

user_input = input()
output = func(user_input)
print(output)