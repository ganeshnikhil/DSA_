def reverse_string(input_string):
    
    reversed_string = input_string[::-1]
    return reversed_string


if __name__ == "__main__":
    
    string = "mouli"
    
    reversed_result = reverse_string(string)
    
    print(f"The reversed string of '{string}' is '{reversed_result}'.")
