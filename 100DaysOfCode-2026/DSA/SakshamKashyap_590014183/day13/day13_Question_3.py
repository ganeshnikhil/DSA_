#prompt the user to enter the string

user_string = input("Enter the string: ").split()

reverse_str = user_string[::-1]

result = ' '.join(reverse_str)

print(result)