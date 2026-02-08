# Check if one string is a rotation of another using an efficient approach
s1 = input ("enter string1:")
s2 = input("enter string2:")


if len(s1) != len(s2):
    print("false")
else:
    
    double = ""
    for i in range(len(s1)):
        double += s1[i]
    for i in range(len(s1)):
        double += s1[i]

    
    found = False
    for i in range(len(double) - len(s2) + 1):
        match = True
        for j in range(len(s2)):
            if double[i + j] != s2[j]:
                match = False
                break
        if match:
            found = True
            break

    
    if found:
        print("true")
    else:
        print("false")
