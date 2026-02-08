#Solution O(n) time
def compress(string):
    c_string = ""
    count = 1
    i = 0
    while i < (len(string) - 1):
        if string[i] == string[i+1]:
            count += 1
        else:
            c_string += string[i] + str(count)
            count = 1
        i+= 1
    c_string += string[i] + str(count)
    if(len(c_string) < len(string)):
        return c_string
    else:
        return string

#Fixed Input
string1 = "aabcccccaaa"
print(compress(string1))

#Custom Input
string1 = input("Enter the string : ")
print(compress(string1))
