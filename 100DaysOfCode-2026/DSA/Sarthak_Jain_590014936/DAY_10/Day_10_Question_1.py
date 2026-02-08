#Sarthak Jain 590014936
#Day 10 Question 1
#String Comparison

s1 = input("Enter first string: ")
s2 = input("Enter second string: ")

# Exact equality
if s1 == s2:
    print("Equal")
else:
    print("Not equal")

# Case-insensitive equality
if s1.lower() == s2.lower():
    print("Equal ignoring case")
else:
    print("Not equal ignoring case")

# Alphabetical (lexicographical whaatt!) comparison
if s1 == s2:
    print("Strings are identical")
elif s1 < s2:
    print('"' + s1 + '" comes before "' + s2 + '"')
else:
    print('"' + s2 + '" comes before "' + s1 + '"')
