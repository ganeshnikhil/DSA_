Your task: Compare two strings for exact equality, case-insensitive equality, and 
lexicographical order.
  
str1 = input("Enter first string: ")
str2 = input("Enter second string: ")
if str1 == str2:
    print("Strings are exactly equal")
else:
    print("Strings are not exactly equal")
    if str1.lower() == str2.lower():
        print("Strings are equal ignoring case")
    else:
        print("Strings are completely different")
if str1 < str2:
    print(f'"{str1}" comes before "{str2}"')
elif str1 > str2:
    print(f'"{str1}" comes after "{str2}"')
else:
    print("Both strings are same alphabetically")
