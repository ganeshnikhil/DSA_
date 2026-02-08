Your task: Count vowels and consonants separately, ignoring non-alphabetic characters.
  def count_vowels_and_consonants(text):
    vowels = "aeiou"
    vowel_count = 0
    consonant_count = 0

    for char in text:
        if char.isalpha():
            if char.lower() in vowels:
                vowel_count += 1
            else:
                consonant_count += 1

    return vowel_count, consonant_count

user_input = input("Enter any text: ")

v, c = count_vowels_and_consonants(user_input)

print("Vowels:", v, ", Consonants:", c)


