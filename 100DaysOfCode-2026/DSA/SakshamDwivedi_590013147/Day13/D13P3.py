#Solution Function O(n)
def reverse_words(string):
    reversed_string = " ".join(string.split()[::-1])
    return reversed_string

#Fixed Input
print(reverse_words("Hello World Programming"))

#Custom Input
string1 = input("Enter a string : ")
print(reverse_words(string1))
