def count_vowels_and_consonants(s):
    vowels = set('aeiouAEIOU')
    vowel_count = 0
    consonant_count = 0

    for c in s:
        if c.isalpha():
            if c in vowels:
                vowel_count += 1
            else:
                consonant_count += 1

    print(f"Vowels: {vowel_count}, Consonants: {consonant_count}")

# Test cases
count_vowels_and_consonants("hello")        # Vowels: 2, Consonants: 3
count_vowels_and_consonants("Programming")  # Vowels: 3, Consonants: 8
count_vowels_and_consonants("aeiou")        # Vowels: 5, Consonants: 0
