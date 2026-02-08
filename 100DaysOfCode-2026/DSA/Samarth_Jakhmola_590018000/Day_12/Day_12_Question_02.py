def remove_duplicate_characters(string):
    frequency = {}
    string_1 = ""
    for i in string:
        if i in frequency:
            frequency[i] += 1
        else:
            frequency[i] = 1
    for i in frequency:
        string_1 = string_1 + i
    
    return string_1

string = input("Enter a string : ")
print(f"\"{remove_duplicate_characters(string)}\"")
