#Check if any permutation of a string can form a palindrome.
s = input("Enter a string: ")
char_count = {}

for ch in s:
    if ch in char_count:
        char_count[ch] += 1
    else:
        char_count[ch] = 1

odd_count = 0
for ch in char_count:
    if char_count[ch] % 2 != 0:
        odd_count += 1

if odd_count <= 1:
    print("true")
else:
    print("false")
