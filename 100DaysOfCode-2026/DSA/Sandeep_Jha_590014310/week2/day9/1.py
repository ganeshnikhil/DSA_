def palindrome(s):
    s = s.lower()
    return s == s[::-1]

print(palindrome(s = input("enter a word: ")))

#input = Madam -> output = True