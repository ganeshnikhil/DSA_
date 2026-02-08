def str_rot(s1, s2):
    if len(s1) != len(s2):
        return False
    return s2 in (s1 + s1)

print(str_rot(s1=input("enter first string: "),s2=input("enter second string: ")))