#prompt the user to enter the string

import string

s = input("Enter the string: ")

clear_string = ''.join([ char for char in s if char not in string.punctuation]).strip().lower().replace(" ","")

reverse_string = clear_string[::-1] #reversing the string.


if clear_string == reverse_string:
    print("ture")
else:
    print("false")



