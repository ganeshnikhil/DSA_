def palindrome_check(s):
    start = 0
    end = len(s) - 1
    while start < end:
        if s[start] != s[end]:
            return False
        start += 1
        end -= 1
    return True

def main_palindrome():
    s = input("Enter the string to check: ")
    if palindrome_check(s):
        print("Yes the given string is palindrome")
    else:
        print("No the given string is not palindrome")