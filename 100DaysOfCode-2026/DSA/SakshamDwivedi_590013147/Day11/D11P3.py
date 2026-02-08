#Solution Function
def pal_subs(string):
    string = ("".join(i for i in string if i.isalpha())).lower()
    sub_s = ""
    sub_s_c = 0
    for i in range(len(string)):
        for j in range(i, len(string)):
            sub_s = string[i:j+1]
            if(sub_s == sub_s[::-1]):
                sub_s_c += 1
    return sub_s_c

#Fixed Input
print(pal_subs("aaa"))

#Custom Input
s = input("Enter the string : ")
print(pal_subs(s))
