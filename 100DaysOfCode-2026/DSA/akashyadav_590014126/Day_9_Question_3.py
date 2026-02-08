def non_repeating_character(s):

    frequency = {}  #to count the frequency
    for char in s:
        frequency[char] = frequency.get(char, 0) + 1    #counts the frequency
    
    for char in s:
        if frequency[char] == 1:    #checks if the character does not repeats itself
            return char
    
    return -1  

#exmple
input_string = "programming"
output = non_repeating_character(input_string)
print(output)  # Output: 'p'