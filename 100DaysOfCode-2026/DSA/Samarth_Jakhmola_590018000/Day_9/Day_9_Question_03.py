def first_non_repeating(string):
    frequency = {}
    for char in string:
        if char in frequency:
            frequency[char] += 1
        else:
            frequency[char] = 1

    for character in frequency:
        if frequency[character] == 1:
            return character 
        
    return '-1'
    
string = input("Enter a string : ")
if first_non_repeating(string).isalpha():
    print(f"\'{first_non_repeating(string)}\'")
else:
    print(first_non_repeating(string))
