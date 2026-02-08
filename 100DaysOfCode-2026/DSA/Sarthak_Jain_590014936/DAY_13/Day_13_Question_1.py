#Sarthak Jain 590014936
#Day 13 Question 1
#Count Words and Find Longest Word

s = input("Enter a string: ")

# Split the string by any whitespace, ignoring multiple spaces
words = s.split()

# Count words
word_count = len(words)

# Find longest word (if there are words)
if word_count > 0:
    longest = max(words, key=len)
else:
    longest = ""

print("Word count:", word_count)
print("Longest word:", '"' + longest + '"')
