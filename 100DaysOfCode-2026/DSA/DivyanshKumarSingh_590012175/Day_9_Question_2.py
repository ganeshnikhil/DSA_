def cntVowelsConsonants(text):
    vowels = "aeiou"
    vc = 0
    cc = 0

    for char in text:
        if char.isalpha():  
            if char.lower() in vowels:
                vc += 1
            else:
                cc += 1

    return vc, cc

inp = input("Enter a string: ")

vowels, consonants = cntVowelsConsonants(inp)

print(f"Vowels: {vowels}, Consonants: {consonants}")
