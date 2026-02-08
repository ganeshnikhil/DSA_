text = input("Enter a string: ")#taking input by the user

length = len(text)#calculating the length

uppercase = text.upper()#converting to uppercase
lowercase = text.lower()#converting to lowercase

# Output
print(f"Length: {length}, Original: \"{text}\", Uppercase: \"{text}, Lowercase: \"{text}\"")