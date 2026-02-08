s = input("Enter a string: ")
a = s.replace(" ", "")
b = s.strip()

words = s.split()
c = " ".join(words)

print("Remove all spaces:", a)
print("Trim:", b)
print("Single spaces:", c)
