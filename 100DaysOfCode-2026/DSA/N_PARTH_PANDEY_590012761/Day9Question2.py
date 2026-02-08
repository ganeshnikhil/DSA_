def count_vowels_and_consonants(s):
    vowels = "aeiou"
    vowel_count = 0
    consonant_count = 0

    for char in s.lower():
        if char.isalpha():
            if char in vowels:
                vowel_count += 1
            else:
                consonant_count += 1

    print(f"Vowels: {vowel_count}, Consonants: {consonant_count}")


count_vowels_and_consonants("hello")               
count_vowels_and_consonants("Python 3.8!")         
count_vowels_and_consonants("123")     
