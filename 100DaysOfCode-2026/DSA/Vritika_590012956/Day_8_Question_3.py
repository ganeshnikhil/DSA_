input_string = input("Enter a string: ")

reversed_string = ""        #for empty string 

for char in input_string:
    reversed_string = char + reversed_string  
print("Reversed String:", reversed_string)
