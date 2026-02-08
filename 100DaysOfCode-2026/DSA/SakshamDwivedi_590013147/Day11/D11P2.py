#Solution Function
def longest_pal(string):
    longest_s = ""
    string = ("".join(i for i in string if i.isalpha())).lower()
    for i in range(len(string)):
        for j in range(i, len(string)):
            sub_s = string[i:j+1]
            if(sub_s == sub_s[::-1]):
                if(len(sub_s) >= len(longest_s)):
                    longest_s = sub_s
                
    return longest_s

#Fixed Input
print(longest_pal("aaaracecara"))

#Custom Input
s = input("Enter a string : ")
print(longest_pal(s))
