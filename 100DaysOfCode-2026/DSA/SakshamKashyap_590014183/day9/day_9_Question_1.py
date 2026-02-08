#prompt the user to enter the string(only alphabetic character).

User_string = input("Enter the string which you want to check palindrome: ")

reverse_string = User_string[::-1]

if User_string == reverse_string:

    print("true")

else:
    
    print("false")