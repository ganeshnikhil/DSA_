def is_rotation(s1, s2):

    if len(s1) != len(s2):
        return False
    return s2 in (s1 + s1)

string1 = "waterbottle"
string2 = "erbottlewat"

print(is_rotation(string1, string2))  
