string1 = input("String1: ")
string2 = input("String2: ")
s1 = string1.replace(" ","").lower()
s2 = string2.replace(" ","").lower()
if len(s1) != len(s2):
    print("false")
else:
    for c in s1:
        if s1.count(c) != s2.count(c):
            print("false")
            break
    else:
            print("true")
