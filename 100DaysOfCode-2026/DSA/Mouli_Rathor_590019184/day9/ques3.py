def nonrepeating(s):
    
    char_count = {}
    
    for char in s:
        if char in char_count:
            char_count[char] += 1
        else:
            char_count[char] = 1

    for char in s:
        if char_count[char] == 1:
            return char
            
    return -1  

input_string = "swiss"

result = nonrepeating(input_string)

print("\nResult:")
print(result)
