def count_vowels_consonants(s):
    vowels = "aeiou"
    v_count = 0
    c_count = 0

    for char in s.lower():
        if char.isalpha():
            if char in vowels:
                v_count += 1
            else:
                c_count += 1

    return v_count, c_count

user_input = input("Enter a string: ")

vowels, consonants = count_vowels_consonants(user_input)

print("Vowels:", vowels)
print("Consonants:", consonants)
