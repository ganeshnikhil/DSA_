#Sarthak Jain 590014936
#Day 9 Question 1
#Check if a String is a Palindrome (Alphabetic Only, Case-Insensitive)

s = input("Enter a string: ")

# Remove non-alphabetic characters and convert to lowercase
filtered = ""
for c in s:
    if c.isalpha():
        filtered += c.lower()

# Check if filtered string is equal to its reverse
if filtered == filtered[::-1]:
    print("true")
else:
    print("false")
