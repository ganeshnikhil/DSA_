def count_words_and_longest(s):
    words = s.strip().split()
    word_count = len(words)
    longest = max(words, key=len) if words else ""
    return word_count, longest

# Example usage
s = "  Java Python C++ "
count, longest = count_words_and_longest(s)
print(f"Word count: {count}, Longest word: \"{longest}\"")
