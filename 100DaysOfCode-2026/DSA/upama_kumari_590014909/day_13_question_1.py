def count_words_and_find_longest(text):
    text = text.strip()

    words = text.split()

    word_count = len(words)

    longest_word = max(words, key=len) if words else ""

    print(f'Word count: {word_count}, Longest word: "{longest_word}"')

input_text = "a bb ccc dddd"
count_words_and_find_longest(input_text)
