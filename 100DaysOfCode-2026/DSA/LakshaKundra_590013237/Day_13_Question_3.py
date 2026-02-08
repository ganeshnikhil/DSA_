def reverse_words(s):
    words = s.strip().split()
    return ' '.join(reversed(words))

s = input()
print(reverse_words(s))
