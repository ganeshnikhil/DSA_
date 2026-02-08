def first_unique_char(s):
    for c in s:
        if s.count(c) == 1:
            return c
    return -1

print(first_unique_char("aabbcc"))  # "-1"
