#Solution function
def pal(string):
    string = ("".join(i for i in string if i.isalpha())).lower()
    if(string == string[::-1]):
        return True
    return False


#Fixed Input
print(pal("A man, a plan, a canal : Panama"))

#Custom Input
s = input("Enter a string : ")
print(pal(s))
