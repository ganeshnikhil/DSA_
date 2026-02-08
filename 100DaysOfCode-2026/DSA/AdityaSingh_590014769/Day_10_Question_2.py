def function(input_str):
    # 1. Remove all spaces
    remove_all = input_str.replace(" ", "")

    # 2. Trim leading and trailing spaces
    trimmed = input_str.strip()

    # 3. Remove extra spaces between words (leave only single spaces)
    single_spaced = ' '.join(input_str.split())

    print(f'Remove all: "{remove_all}"')
    print(f'Trim: "{trimmed}"')
    print(f'Single spaces: "{single_spaced}"')

# Input from user
text = input("Enter a string: ")
function(text)