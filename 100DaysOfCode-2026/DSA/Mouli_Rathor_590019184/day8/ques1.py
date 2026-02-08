def string_operations(input_string):
 
    length = len(input_string)
    
    uppercase_string = input_string.upper()
    lowercase_string = input_string.lower()

    print("Original String:", input_string)
    print("Length of String:", length)
    print("Uppercase String:", uppercase_string)
    print("Lowercase String:", lowercase_string)

if __name__ == "__main__":
  
    user_input = input("Enter a string: ")
    string_operations(user_input)
