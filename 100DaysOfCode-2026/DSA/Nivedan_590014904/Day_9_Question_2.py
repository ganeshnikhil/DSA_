string = input("Enter a string: ")
vowel = 0
consonant = 0
for n in string:
    if n.isalpha():
     if n in 'AEIOUaeiou':
      vowel+=1
     else:
      consonant +=1
print("Vowels:",vowel)
print("Consonants:",consonant)
