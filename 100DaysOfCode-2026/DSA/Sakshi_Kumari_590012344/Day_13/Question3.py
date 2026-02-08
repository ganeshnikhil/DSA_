Your task: Reverse word order while maintaining word integrity and proper spacing.
  
def reverse_words(sentence):
    word_list = sentence.strip().split()
    reversed_list = word_list[::-1]
    result = ' '.join(reversed_list)
    return result

print("Hi! This program will reverse the order of words in your sentence.")
user_input = input("Enter your sentence here: ")
output = reverse_words(user_input)
print("Reversed sentence:", output)
