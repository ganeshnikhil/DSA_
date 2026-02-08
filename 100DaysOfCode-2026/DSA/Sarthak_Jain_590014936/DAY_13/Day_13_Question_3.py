#Sarthak Jain 590014936
#Day 13 Question 3
#Reverse Words in String

s = input("Enter a string: ")

# Split the string by any whitespace, removing extra spaces
words = s.split()

# Reverse the list of words
words.reverse()

# Join back with single spaces
reversed_s = " ".join(words)

print("Reversed words string:", '"' + reversed_s + '"')
