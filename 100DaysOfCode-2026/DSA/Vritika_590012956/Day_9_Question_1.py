def is_palindrome(input_string):
    cleaned_string = ''
    for char in input_string:
        if char.isalpha():  
            cleaned_string += char.lower()
    
    if cleaned_string == cleaned_string[::-1]:
        return True
    else:
        return False

input_string = input("Enter a string: ")
if is_palindrome(input_string):
    print("True - The string is a palindrome.")
else:
    print("False - The string is not a palindrome.")
