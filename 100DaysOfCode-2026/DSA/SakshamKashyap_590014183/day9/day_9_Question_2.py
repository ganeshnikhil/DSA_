# program to count Vowels and Consonant

#prompt the user to enter the string.
User_str = input("Enter the string: ").strip()

Vowels = 0

Consonant = 0

for word in User_str.lower():
    if word in ["a","e","i","o","u"]:
        Vowels += 1
    elif word.isalpha():
        Consonant +=1
    
print(f"Vowels: {Vowels}, Consonants: {Consonant}")
