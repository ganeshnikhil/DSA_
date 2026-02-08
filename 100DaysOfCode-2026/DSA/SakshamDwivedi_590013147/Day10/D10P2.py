#Solution Function
def remove_space(string):
    r_string = "".join(string.split())
    t_string = string.strip()
    s_string = " ".join(string.split())

    return r_string, t_string, s_string


#Fixed Input
rm_all, trim, rm_sp = remove_space(" a   b     c ")
print("Removed all : ", repr(rm_all), "Trim : ", repr(trim),  "Single space : ", repr(rm_sp))

#Custom Input
st = input("Enter a string : ")
rm_all, trim, rm_sp = remove_space(st)
print("Removed all : ", repr(rm_all), "Trim : ", repr(trim),  "Single space : ", repr(rm_sp))
