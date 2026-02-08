string1 = "apple"
string2 = "banana"

if string1 == string2:
    print("Exactly equal")
elif string1.lower() == string2.lower():
    print("Not equal, Equal ignoring case,", end=' ')
else:
    print("Completely different,", end=' ')

if string1 < string2:
    print(f'"{string1}" comes before "{string2}"')
elif string1 > string2:
    print(f'"{string2}" comes before "{string1}"')
else:
    print(f'Both strings are equal lexicographically')
