def string_operations(input_string):
    length=len(input_string)
    uppercase_string=input_string.upper()
    lowercase_string=input_string.lower()
    print(f'Length:{length},Original:"{input_string}",Uppercase:"{uppercase_string}",Lowercase:"{lowercase_string}"')
input1="Hello World"
string_operations(input1)
input2="Python"
string_operations(input2)