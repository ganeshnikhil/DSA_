def palindrome(s):
    s = s.lower()
    new = ""
    for c in s:
        if c.isalpha():
            new = new + c
    return new == new[::-1]

print(palindrome(s=input("enter your phrase: ")))