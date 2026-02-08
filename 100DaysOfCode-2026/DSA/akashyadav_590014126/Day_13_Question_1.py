def word_count_and_longest_word(text):

    words = text.strip().split()    # to split words according to spaces
    
    count = len(words)  # to find length of word
    
    longest = max(words, key=len) if words else ""  # to find word of maximum length
    
    return count, longest

#example
input_str = "  Hello   Python   Programmers  "
count, longest = word_count_and_longest_word(input_str)
print(f"Word count: {count}")
print(f"Longest word: \"{longest}\"")
