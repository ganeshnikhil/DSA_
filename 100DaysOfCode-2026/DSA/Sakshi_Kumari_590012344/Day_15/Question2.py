Your task: Sort strings by length while preserving relative order for equal-length strings.

print("Hey! This program will sort your words from shortest to longest.")
user_input = input("Type some words separated by spaces: ").strip()
if not user_input:
    print("Looks like you didn't type anything.")
else:
    words = user_input.split()

    if len(words) == 0:
        print("Oops, there are no actual words to sort.")
    elif len(words) == 1:
        print("Just one word? That was easy! Here's your word:")
        print(words)
    else:
        sorted_words = sorted(words, key=len)
        print("All sorted based on length!")
        print(sorted_words)
