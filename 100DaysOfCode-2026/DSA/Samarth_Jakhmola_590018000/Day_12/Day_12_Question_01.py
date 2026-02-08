def string_rotation(string_1, string_2):
    if len(string_1) != len(string_2):
        return False
    
    return string_2 in (string_1 + string_1)

string_1 = input("Enter string 1 : ")
string_2 = input("Enter string 2 : ")
print("true" if string_rotation(string_1, string_2) else "false")
