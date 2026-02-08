def function(str1, str2):
    if str1 == str2:
        print("Equal")
    else:
        print("Not equal")

    if str1.lower() == str2.lower():
        print("Equal ignoring case")
    else:
        print("Not equal ignoring case")

    if str1 < str2:
        print(f'"{str1}" comes before "{str2}"')
    elif str1 > str2:
        print(f'"{str2}" comes before "{str1}"')
    else:
        print("Strings are identical")
string1 = input("Enter first string: ")
string2 = input("Enter second string: ")

function(string1, string2)