def reverse_words_in_string(s):
  
    words = s.strip().split()

    reversed_words = words[::-1]
  
    return ' '.join(reversed_words)

user_input = input("Enter a sentence: ")

result = reverse_words_in_string(user_input)
print("Reversed word order:", result)
