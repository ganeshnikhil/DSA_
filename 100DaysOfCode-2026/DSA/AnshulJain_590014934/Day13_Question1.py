s = input().strip()
words = s.split()
word_count = len(words)
longest_word = max(words, key=len) if words else ''
print(word_count)
print(longest_word)
#taking input from the user 
#input is Anshul Jain
#output is 2 and longest word is Anshul 