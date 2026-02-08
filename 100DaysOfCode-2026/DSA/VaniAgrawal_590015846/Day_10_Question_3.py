#: Check if two strings are anagrams (ignore case and spaces).
str1 = input("string1 : ")
str2 = input("string2 :")

normalized1 = str1.replace(" ", "").lower()
normalized2 = str2.replace(" ", "").lower()

is_anagram = sorted(normalized1) == sorted(normalized2)

print(str(is_anagram).lower())
print()
