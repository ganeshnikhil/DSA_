def check_for_strings(s1, s2):
    
    if s1 == s2:
        eq = "Equal"    # if they match equally
    else:
        eq = "Not equal"    # if they doesn't match completely


    if s1.lower() == s2.lower():
        case_eq = "Equal ignoring case" # if they are equal in case insensitive
    else:
        case_eq = "Not equal ignoring case" # if in case insensitive also they are not equal


    if s1 == s2:
        order = "Strings are identical" # if both are equal 
    elif s1 < s2:
        order = f'"{s1}" comes before "{s2}"'
    else:
        order = f'"{s2}" comes before "{s1}"'

    return f"{eq}, {case_eq}, {order}"

#Example
print(check_for_strings("apple", "banana"))