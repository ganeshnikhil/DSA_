def reverse_words(s):
    words = s.strip().split()
    reversed_words = ' '.join(reversed(words))
    return reversed_words

# User input
user_input = input("Enter a string to reverse word order: ")
print("Output:", reverse_words(user_input))