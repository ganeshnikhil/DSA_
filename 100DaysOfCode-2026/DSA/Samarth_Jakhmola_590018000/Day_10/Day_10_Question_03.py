def check_anagram(string_1, string_2):
    s1 = string_1.replace(" ", "").lower()
    s2 = string_2.replace(" ", "").lower()

    return sorted(s1) == sorted(s2)

string_1 = input("Enter the 1st string : ")
string_2 = input("Enter the 2nd string : ")
print("true" if check_anagram(string_1, string_2) == True else "false")
