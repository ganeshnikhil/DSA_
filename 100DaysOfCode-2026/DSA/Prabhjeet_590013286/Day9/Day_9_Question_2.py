def function(input_str):
    vowels = "aeiouAEIOU"
    vowel_count = 0
    consonant_count = 0

    for ch in input_str:
        if ch.isalpha():
            if ch in vowels:
                vowel_count += 1
            else:
                consonant_count += 1

    print(f"Vowels: {vowel_count}, Consonants: {consonant_count}")


text = input("Enter a string: ")
function(text)