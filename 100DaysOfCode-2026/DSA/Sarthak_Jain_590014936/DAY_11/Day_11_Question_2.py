#Sarthak Jain 590014936
#Day 11 Question 2
#Longest Palindromic Substring

s = input("Enter a string: ")

def expand_from_center(left, right):
    while left >= 0 and right < len(s) and s[left] == s[right]:
        left -= 1
        right += 1
    return s[left + 1:right]

longest = ""

for i in range(len(s)):
    # Check for odd-length palindrome
    p1 = expand_from_center(i, i)
    # Check for even-length palindrome
    p2 = expand_from_center(i, i + 1)

    # Keep the longest
    if len(p1) > len(longest):
        longest = p1
    if len(p2) > len(longest):
        longest = p2

print("Longest palindromic substring:", '"' + longest + '"')
