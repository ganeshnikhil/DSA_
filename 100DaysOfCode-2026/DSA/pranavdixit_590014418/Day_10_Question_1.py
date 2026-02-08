def compare_strings(s1, s2):
    if s1 == s2:
        equality = "Equal"
    else:
        equality = "Not equal"

    if s1.lower() == s2.lower():
        case_insensitive = "Equal ignoring case"
    else:
        case_insensitive = "Not equal ignoring case"

    if s1 < s2:
        order = f'"{s1}" comes before "{s2}"'
    elif s1 > s2:
        order = f'"{s2}" comes before "{s1}"'
    else:
        order = "Strings are identical"

    return equality, case_insensitive, order

print(compare_strings("Hello", "hello"))
print(compare_strings("apple", "banana"))
print(compare_strings("test", "test"))
