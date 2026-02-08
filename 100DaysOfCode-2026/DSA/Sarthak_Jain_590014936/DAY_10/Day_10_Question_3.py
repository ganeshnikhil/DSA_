#Sarthak Jain 590014936
#Day 10 Question 3
#Check if Two Strings Are Anagrams (Ignore Case and Spaces)

s1 = input("Enter first string: ")
s2 = input("Enter second string: ")

# Clean the strings: remove spaces and convert to lowercase
s1_clean = s1.replace(" ", "").lower()
s2_clean = s2.replace(" ", "").lower()

# Count characters
freq1 = {}
freq2 = {}

for c in s1_clean:
    freq1[c] = freq1.get(c, 0) + 1

for c in s2_clean:
    freq2[c] = freq2.get(c, 0) + 1

# Compare character frequencies
if freq1 == freq2:
    print("true")
else:
    print("false")
