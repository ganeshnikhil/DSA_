def function(input_str):
    reversed_str = input_str[::-1]
    return reversed_str

# Input from user
string = input("Enter a string: ")
result = function(string)
print(f"Reversed string: \"{result}\"")