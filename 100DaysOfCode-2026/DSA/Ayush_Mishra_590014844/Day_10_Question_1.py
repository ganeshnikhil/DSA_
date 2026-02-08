def compare_strings(s1, s2):
    if s1 == s2:
        print("Equal")
    else:
        print("Not equal")

    if s1.lower() == s2.lower():
        print("Equal ignoring case")
    else:
        print("Not equal ignoring case")

    if s1 == s2:
        print("Strings are identical")
    elif s1 < s2:
        print(f'"{s1}" comes before "{s2}"')
    else:
        print(f'"{s2}" comes before "{s1}"')
