s1 = input("Enter string1: ").lower()
s2 = input("Enter string2: ").lower()
if len(s1) != len(s2):
    print("false")
else:
    both = s1 + s1
    if s2 in both:
        print("true")
    else:
        print("false")
