string = input("Enter a string: ")
newstr = ""
i = 0
while i < len(string):
    count = 1
    while i+1<len(string) and string[i] == string[i+1]:
        count+=1
        i+=1
    newstr += string[i] + str(count)
    i += 1
if len(newstr)>len(string):
       print(string)
else:
        print(newstr)
