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


for word in ["hello", "Programming", "aeiou"]:
    v, c = count_vowels_consonants(word)
    print(f"Input: {word}\nVowels: {v}, Consonants: {c}\n")
