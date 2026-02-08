def reverse_words(string):
    reversed_string = " ".join(string.split()[::-1])
    return reversed_string
print(reverse_words("Hello World Programming"))

string1 = input("Enter a string : ")
print(reverse_words(string1))
