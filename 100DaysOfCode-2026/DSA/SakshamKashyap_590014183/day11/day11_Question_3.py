#prompt the user to enter the string

user_string = input("Enter the string: ")

def substr_palindrome(string):
    substr = [ string[i:j] for i in range(len(string)) for j in range(i+1,len(string)+1) ]

    palindrome_string = [ word for word in substr if word == word[::-1]]

    print(len(palindrome_string))

substr_palindrome(user_string)

    