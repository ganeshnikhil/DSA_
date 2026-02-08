def count_vowels_consonants(string):
    vowels = "AEIOUaeiou"
    vowel_count = 0
    consonant_count = 0
    for i in string:
        if i.isalpha():
            if i in vowels:
                vowel_count += 1
            else:
                consonant_count += 1    
    
    return vowel_count, consonant_count
    
string = input("Enter a string : ")
vowels, consonants = count_vowels_consonants(string)
print(f"Vowels: {vowels},Consonants: {consonants}")
