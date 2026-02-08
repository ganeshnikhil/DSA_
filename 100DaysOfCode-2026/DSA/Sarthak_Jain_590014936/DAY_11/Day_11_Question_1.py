#Sarthak Jain 590014936
#Day 11 Question 1
#Palindrome Check (Ignore Spaces, Punctuation, and Case)

s = input("Enter a string: ")

filtered = ""

# Keep only alphanumeric characters and convert to lowercase
for c in s:
    if c.isalnum():
        filtered += c.lower()

# Check if the filtered string is a palindrome
if filtered == filtered[::-1]:
    print("true")
else:
    print("false")
