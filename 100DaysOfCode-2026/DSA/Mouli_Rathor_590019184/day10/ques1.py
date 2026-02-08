def compare(str1, str2):
    
    if str1 == str2:
        print("The strings are exactly equal.")
    else:
        print("The strings are not exactly equal.")

    if str1.lower() == str2.lower():
        print("The strings are equal when ignoring case.")
    else:
        print("The strings are not equal when ignoring case.")

    if str1 < str2:
        print(f'"{str1}" comes before "{str2}" alphabetically.')
    elif str1 > str2:
        print(f'"{str1}" comes after "{str2}" alphabetically.')
    else:
        print("The strings are equal in alphabetical order.")

string1 = "Ramu"
string2 = "ramu"

compare(string1, string2)

