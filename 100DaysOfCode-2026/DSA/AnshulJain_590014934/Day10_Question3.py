from collections import Counter

s1 = input("First string: ").replace(" ", "").lower()
s2 = input("Second string: ").replace(" ", "").lower()

print("Anagrams" if Counter(s1) == Counter(s2) else "Not anagrams")

# Taking input from the user 
# EXAMPLE: First string: listen
#          Second string: silent
# Output: Anagrams