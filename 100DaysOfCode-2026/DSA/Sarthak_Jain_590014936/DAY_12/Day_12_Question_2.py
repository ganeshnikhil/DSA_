#Sarthak Jain 590014936
#Day 12 Question 2
#Remove Duplicate Characters While Preserving Order

s = input("Enter a string: ")

result = ""
seen = set()

for c in s:
    if c not in seen:
        result += c
        seen.add(c)

print("String after removing duplicates:", '"' + result + '"')
