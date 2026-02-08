#Solution 1 : Less efficient
def compare(string1, string2):
    if(string1 == string2):
        print("Equal, ", end = " ")
    else:
        print("Not equal, ", end = " ")
    if(string1.lower() == string2.lower()):
        print("Equal ignoring case, ", end = " ")
    else:
        print("Not equal ignoring case, ", end = " ")
    if(string1 > string2):
        print(string2 + " comes before " + string1)
    elif(string2 > string1):
        print(string1 + " comes before " + string2)
    else:
        print("Both strings are identical!")


#Solution 2 : This one is more efficient as it doesn't perform all checks
def compare2(string1, string2):
    if(string1 == string2):
        print("Equal, Equal ignoring case, Both strings are identical")
    else:
        print("Not equal, ", end = " ")
        if(string1.lower() == string2.lower()):
            print("Equal ignoring case, ", end = " ")
        else:
            print("Not equal ignoring case, ", end = " ")
        if(string1 > string2):
            print(string2 + " comes before " + string1)
        else:
            print(string1 + " comes before " + string2)
        

#Fixed Input
compare("Hello", "hello")
compare("test", "test")

compare2("Hello", "hello")
compare2("test", "test")

#Custom Input
cstring1 = input("Enter string 1 : ")
cstring2 = input("Enter string 2 : ")
compare(cstring1, cstring2)
compare2(cstring1, cstring2)




