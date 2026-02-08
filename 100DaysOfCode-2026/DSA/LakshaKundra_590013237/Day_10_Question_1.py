def compare_strings(s1, s2):
    if s1 == s2:
        eq_result = "Equal"
    else:
        eq_result = "Not equal"

    if s1.lower() == s2.lower():
        case_eq_result = "Equal ignoring case"
    else:
        case_eq_result = "Not equal ignoring case"

    if s1 == s2:
        lex_result = "Strings are identical"
    elif s1 < s2:
        lex_result = f'"{s1}" comes before "{s2}"'
    else:
        lex_result = f'"{s2}" comes before "{s1}"'

    print(eq_result)
    print(case_eq_result)
    print(lex_result)

compare_strings("Hello", "hello")
print("---")
compare_strings("apple", "banana")
print("---")
compare_strings("test", "test")
