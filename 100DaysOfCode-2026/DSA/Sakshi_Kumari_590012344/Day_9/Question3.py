Your task: Find the first character that appears only once, or return -1 if none exists.
def first_unique_char(text):
    for ch in text:
        if text.count(ch) == 1:
            return ch
    return -1

user_input = input("Enter a string: ")

result = first_unique_char(user_input)

print("First non-repeating character:", result)
