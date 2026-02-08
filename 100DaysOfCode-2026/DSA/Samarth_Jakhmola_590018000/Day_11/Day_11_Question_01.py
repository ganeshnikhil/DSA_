def palindrome_without_spaces_punctuation(string):
    list_1 = []
    list_2 = []
    for i in string.lower().strip().replace(" ", ""):
        if i.isalpha() or i.isdigit():
            list_1.append(i)
    
    for i in string[::-1].lower().strip().replace(" ", ""):
        if i.isalpha() or i.isdigit():
            list_2.append(i)
    
    if list_1 == list_2:
        return True
    else:
        return False

string = input("Enter a string : ")
print("true" if palindrome_without_spaces_punctuation(string) else "false")
