def word_count_and_longest_word(s):
    words = s.strip().split()
    if not words:
        return 0, ""
    longest_word = max(words, key=len)
    return len(words), longest_word
