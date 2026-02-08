def reverse_words(text):

    words = text.strip().split()
 
    reversed_words = words[::-1]

    result = ' '.join(reversed_words)
    
    print(f'"{result}"')

input_text = "Java Python C++"
reverse_words(input_text)
