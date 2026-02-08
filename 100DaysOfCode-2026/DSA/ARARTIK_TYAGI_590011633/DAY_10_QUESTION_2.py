import re

def remove_spaces(s):
    all_removed = s.replace(" ", "")
    trimmed = s.strip()
    single_spaced = re.sub(r'\s+', ' ', trimmed)

    print("Remove all:", f'"{all_removed}"')
    print("Trim:", f'"{trimmed}"')
    print("Single spaces:", f'"{single_spaced}"')

# User input
user_input = input("Enter a string with spaces: ")
remove_spaces(user_input)