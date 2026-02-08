def first_non_repeating_char(s):
    for char in s:
        if s.count(char) == 1:
            return char
    return -1
print(first_non_repeating_char("prestige"))