s = input("Enter a string: ")
ch = input("Enter the character you want to count: ")
c=0
for I in s:
    if I==ch:
        c+=1
print("Number of times",ch,"occurs: ",c)