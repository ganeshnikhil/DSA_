#Sarthak Jain 590014936
#Day 12 Question 1
#Check if One String is a Rotation of Another

s1 = input("Enter first string: ")
s2 = input("Enter second string: ")

# Check lengths first
if len(s1) != len(s2):
    print("false")
else:
    # Concatenate s1 with itself
    double_s1 = s1 + s1

    # If s2 is a substring of double_s1, it's a rotation
    if s2 in double_s1:
        print("true")
    else:
        print("false")
