def string_compare(s1, s2):
    if s1 == s2:
        print("Equal, Equal ignoring case, Strings are identical")
        return
    elif s1.lower() == s2.lower():
        print("Not equal, Equal ignoring case")
    
    for i in range(min(len(s1), len(s2))):
        if s1[i] != s2[i]:
            if s1[i] < s2[i]:
                print(f"'{s1}' comes before '{s2}'")
            else:
                print(f"'{s2}' comes before '{s1}'")
            return
    # If all compared characters are equal, the shorter string comes first
    if len(s1) < len(s2):
        print(f"'{s1}' comes before '{s2}'")
    else:
        print(f"'{s2}' comes before '{s1}'")

string_compare(input("enter first word: "), input("enter second word: "))