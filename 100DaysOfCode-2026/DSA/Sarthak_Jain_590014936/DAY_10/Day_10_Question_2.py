#Sarthak Jain 590014936
#Day 10 Question 2
#Remove Spaces: All, Trim, and Single Between Words

s = input("Enter a string: ")

# Remove all spaces
remove_all = s.replace(" ", "")

# Trim (leading and trailing spaces only)
trimmed = s.strip()

# Remove extra spaces between words, keeping only one
single_spaces = " ".join(s.split())

print("Remove all:", '"' + remove_all + '"')
print("Trim:", '"' + trimmed + '"')
print("Single spaces:", '"' + single_spaces + '"')
