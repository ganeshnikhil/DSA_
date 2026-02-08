# Check if a string is a palindrome ignoring spaces, punctuation, and case
s=input("enter string :")

cleaned = ""
for char in s:
    if 'A' <= char <= 'Z':
    
        cleaned += chr(ord(char) + 32)
    elif 'a' <= char <= 'z' or '0' <= char <= '9':
        cleaned += char


is_palindrome = True
n = len(cleaned)
for i in range(n // 2):
    if cleaned[i] != cleaned[n - i - 1]:
        is_palindrome = False
        break

print(is_palindrome)
