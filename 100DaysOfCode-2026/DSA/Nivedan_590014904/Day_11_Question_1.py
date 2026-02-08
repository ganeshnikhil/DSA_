string = input("Enter a String: ")
newstring = ""
for c in string:
    if c.isalnum():
        newstring += c.lower()
if newstring == newstring[::-1]:
    print("true")
else:
    print("false")
