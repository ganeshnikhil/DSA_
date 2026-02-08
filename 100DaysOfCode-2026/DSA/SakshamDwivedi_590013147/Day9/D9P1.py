'''I am trying a new way of writing code, from now I will try to write the logic in a function and the fixed input and custom input
are going to be just function calling in different ways'''

#Function
def palindrome(string):
    if(string.lower() == string[::-1].lower()):
        return True
    else:
        return False

#Fixed Input
string1 = "racecar"
print(palindrome(string1))
print(palindrome("Palap"))
print(palindrome("Power Ranger"))

#Custom Input Array
string1 = input("Enter the string to check : ")
print(palindrome(string1))
