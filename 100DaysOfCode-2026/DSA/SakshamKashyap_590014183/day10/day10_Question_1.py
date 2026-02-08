#prompt the user to enter the two strings

string1 = input("Enter the first string: ").strip()
string2 = input("Enter the second string: ").strip()

#Compare two strings for exact equality, case-insensitive equality, and lexicographical order. 

#case 1
if string1 == string2 :
    print(f"exactly equal, Equal ignoring case, Strings are identical")
elif string1 != string2 and string1.lower() == string2.lower():
    if string1 < string2 :
        print(f"Not equal, Equal ignoring case, '{string1}' come before '{string2}'")
    else:
        print(f"Not equal, Equal ignoring case, '{string2}' come before '{string1}'")

else:
    if string1 < string2:
        print(f"Not equal, Not Equal ignoring case, '{string1}' come before '{string2}'") 
    else:
        print(f"Not equal, Not Equal ignoring case, '{string2}' come before '{string1}'")


