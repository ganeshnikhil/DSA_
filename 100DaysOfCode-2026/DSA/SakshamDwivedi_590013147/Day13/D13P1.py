#Solution Function [O(n)]
def longest_word(string):
    string = string.split()
    longest = string[0]
    for i in range(len(string)-1):
        if(len(longest) < len(string[i+1])):
            longest = string[i+1]
    return len(string), longest

#Fixed Input
print("Word count : ", longest_word("Hello World Programming")[0], "Longest Word : ", longest_word("Hello World Programming")[1])

#Custom Input
string1 = input("Enter a sentence : ")
print("Word count : ", longest_word(string1)[0], "Longest Word : ", longest_word(string1)[1])
