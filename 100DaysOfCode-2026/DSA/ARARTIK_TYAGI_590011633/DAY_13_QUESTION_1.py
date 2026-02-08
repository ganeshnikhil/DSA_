def word_count_and_longest(s):
    words = s.strip().split()
    if not words:
        return 0, ""
    longest = max(words, key=len)
    return len(words), longest

# User input
user_input = input("Enter a sentence: ")
count, longest = word_count_and_longest(user_input)
print(f"Word count: {count}, Longest word: \"{longest}\"")