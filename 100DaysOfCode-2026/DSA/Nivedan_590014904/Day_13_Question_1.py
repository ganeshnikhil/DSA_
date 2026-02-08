string = input("Enter a String: ").strip()
words = string.split()
count = len(words)
long_word = ""
long_leng = 0
for word in words:
    if len(word) > long_leng:
        long_word = word
        long_leng = len(word)
print("Word count:",count)
print("Longest word:",long_word)
