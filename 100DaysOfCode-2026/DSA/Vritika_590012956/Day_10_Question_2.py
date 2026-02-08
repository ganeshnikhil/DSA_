def remove_spaces(input_string):
    # Remove all spaces
    all_removed = input_string.replace(" ", "")
    # Remove spaces (trim)
    trimmed = input_string.strip()
    # Remove space between words 
    single_spaced = ' '.join(input_string.strip().split())

    return all_removed, trimmed, single_spaced

user_input = input("Enter a string: ")
all_removed, trimmed, single_spaced = remove_spaces(user_input)


print(f"Remove all: \"{all_removed}\"")
print(f"Trim: \"{trimmed}\"")
print(f"Single spaces: \"{single_spaced}\"")
