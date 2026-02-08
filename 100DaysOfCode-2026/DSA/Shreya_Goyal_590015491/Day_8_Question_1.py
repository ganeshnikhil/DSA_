string = input("Enter a string: ")

c=0
for i in string:
    c+=1

u = string.upper()
l = string.lower()

print("Length:", c)
print("Original:", string)
print("Uppercase:", u)
print("Lowercase:", l)