text = input("Enter a string: ")

text = text.strip()
words = text.split()

word_count = len(words)

longest_word = ""
for word in words:
    if len(word) > len(longest_word):
        longest_word = word
 
print("Word count:", word_count)
print(f'Longest word: "{longest_word}"')
