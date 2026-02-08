def isRotation(s1,s2):
    
    s1 = s1.strip()
    s2 = s2.strip()

    
    if len(s1) != len(s2):
        return False

    
    return s2 in (s1+s1)


s1 = input("Enter String 1: ")
s2 = input("Enter String 2: ")


if isRotation(s1,s2):
    print("true")
else:
    print("false")
