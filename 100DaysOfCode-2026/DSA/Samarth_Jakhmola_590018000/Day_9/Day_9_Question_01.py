string = input("Enter a string : ")
print("true" if string.lower() == string.lower()[::-1] else "false")
