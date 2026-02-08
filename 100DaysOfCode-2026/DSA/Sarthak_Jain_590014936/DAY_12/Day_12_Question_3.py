#Sarthak Jain 590014936
#Day 12 Question 3
#Compress String Using Character Count Encoding

s = input("Enter a string: ")

compressed = ""
count = 1

for i in range(1, len(s)):
    if s[i] == s[i - 1]:
        count += 1
    else:
        compressed += s[i - 1] + str(count)
        count = 1

# Add the last character and its count
if len(s) > 0:
    compressed += s[-1] + str(count)

# Check if compressed string is shorter
if len(compressed) < len(s):
    print("Compressed string:", '"' + compressed + '"')
else:
    print("Compressed string:", '"' + s + '"')
