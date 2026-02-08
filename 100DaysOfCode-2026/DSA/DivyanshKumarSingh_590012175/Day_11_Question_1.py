def isPalindrome(str):
    s=''.join(char.lower() for char in str if char.isalnum())

    return s==s[::-1]


inp=input("Enter a string: ")

if (isPalindrome(inp)):
    print("true")
else:
    print("false")
