def count_vowels_consonants(s):
    vowels = 'aeiouAEIOU'
    v_count = 0
    c_count = 0

    for char in s:
        if char.isalpha():
            if char in vowels:
                v_count += 1
            else:
                c_count += 1
    return v_count, c_count

# User input
user_input = input("Enter a string: ")
vowels, consonants = count_vowels_consonants(user_input)
print(f"Vowels: {vowels}, Consonants: {consonants}")