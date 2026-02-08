Your task: Check if two strings are anagrams (ignore case and spaces).

str1 = input("Enter first string: ")
str2 = input("Enter second string: ")

str1_clean = str1.replace(" ", "").lower()
str2_clean = str2.replace(" ", "").lower()

if sorted(str1_clean) == sorted(str2_clean):
    print("The strings are anagrams.")
else:
    print("The strings are not anagrams.")
