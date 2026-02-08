def compare_strings(str1, str2):
    if str1 == str2:
        equality = "Equal"
        case_insensitive = "Equal ignoring case"
        lex_order = "Strings are identical"
    elif str1.lower() == str2.lower():
        equality = "Not equal"
        case_insensitive = "Equal ignoring case"
        lex_order = f'"{min(str1, str2)}" comes before "{max(str1, str2)}"'
    else:
        equality = "Not equal"
        case_insensitive = "Not equal ignoring case"
        lex_order = f'"{min(str1, str2)}" comes before "{max(str1, str2)}"'
    
    return equality, case_insensitive, lex_order

# Example usage:
print(compare_strings("Hello", "hello"))  # Output: ('Not equal', 'Equal ignoring case', '"Hello" comes before "hello"')
print(compare_strings("apple", "banana"))  # Output: ('Not equal', 'Not equal ignoring case', '"apple" comes before "banana"')
print(compare_strings("test", "test"))     # Output: ('Equal', 'Equal ignoring case', 'Strings are identical')
