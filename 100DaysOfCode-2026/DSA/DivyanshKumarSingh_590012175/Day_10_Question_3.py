from collections import Counter

def isAnagram(str1, str2):
    c1 = str1.replace(" ", "").lower()
    c2 = str2.replace(" ", "").lower()

    return Counter(c1) == Counter(c2)

s1 = input("Enter first string: ")
s2 = input("Enter second string: ")

if aisAnagram(s1, s2):
    print("true")
else:
    print("false")
