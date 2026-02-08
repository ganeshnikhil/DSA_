a = input("Enter first string: ")
b = input("Enter second string: ")

if len(a) != len(b):
    print("Not rotation")
else:
    c = a + a
    if b in c:
        print("True")
    else:
        print("False")
