def analyze_text(text):
    words = text.strip().split()

    word_count = len(words)
    longest_word = max(words, key=len) if words else ""

    print("Word count:", word_count)
    print(f'Longest word: "{longest_word}"')

input_text = "   Code  with   logic power   "
analyze_text(input_text)
