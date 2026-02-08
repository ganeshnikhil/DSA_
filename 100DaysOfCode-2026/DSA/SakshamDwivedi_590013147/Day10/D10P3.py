#Solution Function 1
def anagram_checker(string1, string2):
    string1 = "".join(string1.split())
    string2 = "".join(string2.split())
    string1 = sorted(string1.lower())
    string2 = sorted(string2.lower())
    if string1 == string2:
        return True
    else:
        return False


#Fixed Input
print(anagram_checker("The Eyes ", "The Eyes"))
print(anagram_checker("ghop", "gowk"))

#Custom Input
s1 = input("Enter string 1 : ")
s2 = input("Enter string 2 : ")
print(anagram_checker(s1, s2))
