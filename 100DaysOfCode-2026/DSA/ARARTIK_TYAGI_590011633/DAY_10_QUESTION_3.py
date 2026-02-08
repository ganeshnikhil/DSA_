def are_anagrams(s1, s2):
    # Remove spaces and convert to lowercase
    s1_clean = ''.join(c.lower() for c in s1 if c.isalpha())
    s2_clean = ''.join(c.lower() for c in s2 if c.isalpha())

    return sorted(s1_clean) == sorted(s2_clean)

# User input
str1 = input("Enter first string: ")
str2 = input("Enter second string: ")

if are_anagrams(str1, str2):
    print("true")
else:
    print("false")