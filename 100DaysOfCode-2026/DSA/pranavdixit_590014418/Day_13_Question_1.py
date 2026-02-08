def word_count_and_longest(s):
    words = s.strip().split()
    word_count = len(words)
    longest_word = max(words, key=len) if words else ""
    print("Word count:", word_count)
    print("Longest word:", f'"{longest_word}"')

word_count_and_longest("Hello world programming")
word_count_and_longest(" Java Python C++ ")
word_count_and_longest("a bb ccc dddd")
