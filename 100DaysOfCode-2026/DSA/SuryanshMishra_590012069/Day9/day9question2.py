def main_vowel_consonant():
    s = input("Enter a string: ")
    vowels = 0
    consonants = 0
    
    for c in s:
        if c.isalpha():
            lower_char = c.lower()
            if lower_char in 'aeiou':
                vowels += 1
            else:
                consonants += 1
    
    print(f"Vowels: {vowels}")
    print(f"Consonants: {consonants}")
