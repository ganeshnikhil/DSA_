def first_non_repeating_character(input_string):
    char_count = {}

    for char in input_string:
        if char in char_count:
            char_count[char] += 1
        else:
            char_count[char] = 1
          
    for char in input_string:   #First character countr 
        if char_count[char] == 1:
            return char         # First non repeating char 

   return -1               # If no repition found 

input_string = input("Enter a string: ")
result = first_non_repeating_character(input_string)

if result != -1:
    print(f'{result}')
else:
    print("-1")
