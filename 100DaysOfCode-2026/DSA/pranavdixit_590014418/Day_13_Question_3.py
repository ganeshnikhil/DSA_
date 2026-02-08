def reverse_words(s):
    words = s.strip().split()
    reversed_words = " ".join(reversed(words))
    print(reversed_words)

reverse_words("Hello World Programming")
reverse_words("The quick brown fox")
reverse_words("Java Python C++")
