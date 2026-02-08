def first_non_repeating_char(s):
    freq = {}
    for char in s:
        freq[char] = freq.get(char, 0) + 1
    for char in s:
        if freq[char] == 1:
            return char
    return -1

user_input = input("Enter a string: ")
result = first_non_repeating_char(user_input)
print("Output:", result)
