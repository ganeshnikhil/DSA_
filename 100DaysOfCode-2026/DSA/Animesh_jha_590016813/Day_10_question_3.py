def are_anagrams(str1, str2):

    str1_clean = str1.replace(" ", "").lower()
    str2_clean = str2.replace(" ", "").lower()

    return sorted(str1_clean) == sorted(str2_clean)

string1 = "The Eyes"
string2 = "They See"

print(are_anagrams(string1, string2))
