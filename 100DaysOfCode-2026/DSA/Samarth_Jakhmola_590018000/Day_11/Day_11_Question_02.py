def longest_palindrome_substring(string):
    if len(string) == 0:
        return -1
    max = 0
    longest = ""
    for i in range(0, len(string)):
        for j in range(i+1, len(string) + 1):
            if string[i:j] == string[i:j][::-1]:
                if len(string[i:j]) > max:
                    max =  len(string[i:j])
                    longest =  string[i:j]
    return longest 

string = input("Enter a string : ")
print("Invalid input" if longest_palindrome_substring(string) == -1 else f"\"{longest_palindrome_substring(string)}\"")
