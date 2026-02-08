text = input("Enter a string: ")#taking input word by the user
char = input("Enter a character to count: ")#taking character to be counted

count = text.count(char)#counting the character

print(f"Character '{char}' occurred {count} time(s) in the string.")#printing the output