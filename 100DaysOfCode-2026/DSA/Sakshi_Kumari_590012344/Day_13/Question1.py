Your task: Count words and find the longest word while handling whitespace properly.

def check_sentence(sentence):
    sentence = sentence.strip()
    word_list = sentence.split()
    total_words = len(word_list)

    if total_words > 0:
        biggest_word = word_list[0]
        for word in word_list:
            if len(word) > len(biggest_word):
                biggest_word = word
    else:
        biggest_word = ""

    print()
    print("Word count:", total_words)
    print("Longest word is:", '"' + biggest_word + '"')

print("Hi! This program will count how many words are in your sentence and tell you the longest word too.")
your_sentence = input("Type your sentence here: ")
check_sentence(your_sentence)
