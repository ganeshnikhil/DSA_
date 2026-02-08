#Sarthak Jain 590014936
#Day 8 Question 2
#Character Count (Case Sensitive)

s = input("Enter a string: ")
ch = input("Enter a character to count: ")

count = 0

for c in s:
    if c == ch:
        count += 1

print("Character", '"' + ch + '"', "appears", count, "times.")
