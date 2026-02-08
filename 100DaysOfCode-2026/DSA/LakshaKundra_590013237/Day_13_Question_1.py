def word_count_and_longest_word(s):
    words = s.strip().split()
    if not words:
        return 0, ""
    longest = max(words, key=len)
    return len(words), longest

s = input()
count, longest = word_count_and_longest_word(s)
print("Word count:", count)
print("Longest word:", f'"{longest}"')
