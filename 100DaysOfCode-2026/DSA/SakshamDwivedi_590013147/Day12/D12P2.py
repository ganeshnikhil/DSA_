#The Python Specific Gigachad O(n) solution
def remove_duplicates(string):
    removed_s = ''.join(dict.fromkeys(string))
    return removed_s

#This is another solution but it is O(n^2)
def remove_dups(string):
    new_string = ""
    i = 0
    while i < len(string):
        if(string[i] in new_string):
            i+=1
        else:
            new_string += string[i]
            i+=1
    return new_string

#Fixed Inputs
print(remove_duplicates("programming"))
print(remove_dups("programming"))

#Custom Inputs
string1 = input("Enter a string : ")
print(remove_duplicates(string1))
print(remove_dups(string1))
