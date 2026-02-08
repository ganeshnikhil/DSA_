st = input("Enter the string: ")
vowel_count = 0
conso_count = 0
vowels = ["a","e","i","o","u"]
for i in st.lower():
    if i.isalpha():
        if i in vowels:
            vowel_count += 1
        else:
            conso_count += 1
print(f"Vowels: {vowel_count}, Consonants: {conso_count}")
