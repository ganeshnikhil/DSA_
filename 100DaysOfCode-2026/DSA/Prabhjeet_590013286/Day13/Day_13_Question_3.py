# Problem 3: Reverse Words in String
# Given a sentence with one or more spaces, reverse the order of the words.
# Maintain a single space between words and ignore extra leading/trailing spaces.

def func(s):
    words = s.strip().split()
    return ' '.join(reversed(words))

user_input = input("Enter a sentence to reverse word order: ")
print("Reversed sentence:", func(user_input))