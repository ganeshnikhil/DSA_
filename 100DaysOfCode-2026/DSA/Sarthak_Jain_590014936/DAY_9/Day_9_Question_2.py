#Sarthak Jain 590014936
#Day 9 Question 2
#Count Vowels and Consonants in a String

s = input("Enter a string: ")

vowels = "aeiouAEIOU"
vowel_count = 0
consonant_count = 0

for c in s:
    if c.isalpha():
        if c in vowels:
            vowel_count += 1
        else:
            consonant_count += 1

print("Vowels:", vowel_count)
print("Consonants:", consonant_count)
