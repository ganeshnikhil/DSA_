s = input("Enter a String: ")
newstr= ""
for c in s:
    if c not in newstr:
        newstr+=c
print(newstr)
