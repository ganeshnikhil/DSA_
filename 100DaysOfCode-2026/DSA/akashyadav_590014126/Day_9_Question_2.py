def frequency_of_vowels_consonants(s):
    vowels = "aeiou"    #all the vowels
    vowel_count = 0 #to count vowels
    consonant_count = 0 #to count consonents

    for char in s:
        if char.isalpha():  # check if the character is a letter
            if char.lower() in vowels:
                vowel_count += 1    #counting vowels
            else:
                consonant_count += 1    #counting consonents

    print(f"Vowels: {vowel_count}, Consonants: {consonant_count}")

#Example
frequency_of_vowels_consonants("Programming")   # Vowels: 3, Consonants: 8