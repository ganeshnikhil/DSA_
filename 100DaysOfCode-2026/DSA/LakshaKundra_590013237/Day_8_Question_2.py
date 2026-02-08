text = input("Enter a string: ")
char = input("Enter the character to count: ")
if len(char) != 1:
    print("Please enter a single character.")
else:
    count = text.count(char)
    print("Output:", count)
