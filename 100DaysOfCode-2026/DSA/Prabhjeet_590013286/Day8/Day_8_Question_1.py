def function(input_str):
    length = len(input_str)
    print(f'Original: "{input_str}"')
    print(f'Uppercase: "{input_str.upper()}"')
    print(f'Lowercase: "{input_str.lower()}"')

user_input = input("Enter a string: ")
function(user_input)
