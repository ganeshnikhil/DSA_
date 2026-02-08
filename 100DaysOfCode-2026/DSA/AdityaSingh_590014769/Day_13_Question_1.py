# Problem 1: Word Count and Longest Word
# Given a string with words separated by spaces (including extra spaces),
# count the number of words and return the longest word in the string.

def func(s):
    words = s.strip().split()
    count = len(words)
    longest = max(words, key=len) if words else ''
    return count, longest

user_input = input("Enter a sentence: ")
word_count, longest_word = func(user_input)
print("Word count:", word_count)
print("Longest word:", longest_word)