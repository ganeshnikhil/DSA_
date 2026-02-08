#Sarthak Jain 590014936
#Day 13 Question 2
#Check if Any Permutation Can Form a Palindrome

s = input("Enter a string: ")

freq = {}

# Count frequencies of each character
for c in s:
    if c in freq:
        freq[c] += 1
    else:
        freq[c] = 1

odd_count = 0

# Count how many characters have an odd frequency
for count in freq.values():
    if count % 2 != 0:
        odd_count += 1

# At most 1 odd count allowed
if odd_count <= 1:
    print("true")
else:
    print("false")
