#Reverse word order while maintaining word integrity and proper spacing
string=list(map(str,input("enter string :").split()))
string.reverse()
string =" ".join(string)
print (f'"{string}"')
