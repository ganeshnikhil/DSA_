#Sarthak Jain 590014936
#Day 11 Question 3
#Count Palindromic Substrings

s = input("Enter a string: ")

def count_palindromes_around_center(left, right):
    count = 0
    while left >= 0 and right < len(s) and s[left] == s[right]:
        count += 1
        left -= 1
        right += 1
    return count

total = 0

for i in range(len(s)):
    total += count_palindromes_around_center(i, i)     # odd-length palindromes
    total += count_palindromes_around_center(i, i + 1) # even-length palindromes

print("Total palindromic substrings:", total)
