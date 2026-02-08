def compare_strings(str1, str2):
    
    exact_equal = str1 == str2
    
    
    case_insensitive_equal = str1.lower() == str2.lower()
    
    
    if str1.lower() == str2.lower():
        lex_order = f'"{str1}" and "{str2}" are the same ignoring case'
    elif str1 < str2:
        lex_order = f'"{str1}" comes before "{str2}"'
    else:
        lex_order = f'"{str2}" comes before "{str1}"'
    
    
    if exact_equal:
        return "Equal"
    elif case_insensitive_equal:
        return f"Not equal, Equal ignoring case, {lex_order}"
    else:
        return f"Not equal, Not equal ignoring case, {lex_order}"


string1 = "Hello"
string2 = "hello"
print(compare_strings(string1, string2))