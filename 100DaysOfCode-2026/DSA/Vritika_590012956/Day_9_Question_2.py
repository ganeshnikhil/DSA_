def count_vowels_consonants(input_string):
    vowels = 'aeiouAEIOU'         
    vowel_count = 0                
    consonant_count = 0            
  
    for char in input_string:
        if char.isalpha():         # Check if the character is a letter
            if char in vowels:    
                vowel_count += 1   
            else:
                consonant_count += 1  
    print("Vowels:", vowel_count)
    print("Consonants:", consonant_count)

user_input = input("Enter a string: ")  
count_vowels_consonants(user_input)
