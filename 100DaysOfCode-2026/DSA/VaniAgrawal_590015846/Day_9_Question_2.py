#Count vowels and consonants separately, ignoring non-alphabetic characters.
string = input("Enter string: ").lower()
vowels = ["a", "e", "i", "o", "u"]
vow = 0
cons = 0

for ch in string:
    if ch.isalpha():
        if ch in vowels:
            vow += 1
        else:
            cons += 1

print(f"Vowels: {vow}, Consonants: {cons}")

        
