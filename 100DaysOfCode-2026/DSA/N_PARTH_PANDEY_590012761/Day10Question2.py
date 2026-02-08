def remove_spaces(input_str):
    
    remove_all = input_str.replace(" ", "")
    
    
    trim = input_str.strip()
    
    
    single_spaces = ' '.join(input_str.split())
    
    return {
        "Remove all": remove_all,
        "Trim": trim,
        "Single spaces": single_spaces
    }


input_string = "  hello   world  "
result = remove_spaces(input_string)

print(f'Remove all: "{result["Remove all"]}"')
print(f'Trim: "{result["Trim"]}"')
print(f'Single spaces: "{result["Single spaces"]}"')