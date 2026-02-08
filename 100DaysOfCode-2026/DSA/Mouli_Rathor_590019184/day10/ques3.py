def anagrams(str1, str2):
   
    str1_cleaned = ''.join(str1.split()).lower()
    str2_cleaned = ''.join(str2.split()).lower()
    
    return sorted(str1_cleaned) == sorted(str2_cleaned)

string1 = "Listen"
string2 = "Silent"

if anagrams(string1, string2):
    print(f'"{string1}" and "{string2}" are anagrams.')
else:
    print(f'"{string1}" and "{string2}" are not anagrams.')
