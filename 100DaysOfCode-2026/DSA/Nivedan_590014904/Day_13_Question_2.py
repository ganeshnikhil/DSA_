string = input("Please enter a string: ").lower()
odd = 0
newstr = ""
for c in string:
    if c not in newstr:
     if string.count(c) % 2 != 0:
        odd+=1
     newstr += c
if odd < 2:
   print("true")
else:
   print("false")
