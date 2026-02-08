def compare_strings(str1, str2):
    
    if str1 == str2:
        print("Exactly equal")
    else:
        print("Not equal")

    if str1.lower() == str2.lower():
        print("Equal ignoring case")
    else:
        print("Different ignoring case")

    if str1 < str2:                       # Lexicographical order comparison
        print(f'"{str1}" comes before "{str2}"')
    elif str1 > str2:
        print(f'"{str2}" comes before "{str1}"')
    else:
        print("Both strings are lexicographically equal")

string1 = input("Enter first string: ")
string2 = input("Enter second string: ")
compare_strings(string1, string2)
