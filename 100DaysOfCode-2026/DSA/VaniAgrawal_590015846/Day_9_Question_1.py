#Check if a string is a palindrome (case-insensitive, alphabetic characters only).
string=input("enter string :").lower()
check_string=string[::-1].lower()
if string.isalpha():
    if string==check_string:
        print(True)
    else:
        print(False)
else:
    print(False)
