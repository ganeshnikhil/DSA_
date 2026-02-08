def count_palindromic_substrings(string):
    if len(string) == 0:
        return -1
    counter = 0
    for i in range(0, len(string)):
        for j in range(i+1, len(string) + 1):
            if string[i:j] == string[i:j][::-1]:
                counter += 1
    
    return counter

string = input("Enter a string : ")
print("Invalid input." if count_palindromic_substrings(string) == -1 else f"\"{count_palindromic_substrings(string)}\"" )
