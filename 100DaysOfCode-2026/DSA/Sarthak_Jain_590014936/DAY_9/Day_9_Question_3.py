#Sarthak Jain 590014936
#Day 9 Question 3
#Find First Non-Repeating Character in a String

s = input("Enter a string: ")

freq = {}

# Count frequency of each character
for c in s:
    if c in freq:
        freq[c] += 1
    else:
        freq[c] = 1

# Find first character with frequency 1
found = False
for c in s:
    if freq[c] == 1:
        print("First non-repeating character:", "'" + c + "'")
        found = True
        break

if not found:
    print("-1")
