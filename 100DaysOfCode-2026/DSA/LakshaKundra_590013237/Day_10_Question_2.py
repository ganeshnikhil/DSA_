def clean_spaces(text):
    all_spaces = text.replace(" ", "")
    trimmed = text.strip()
    single_spaces = ' '.join(text.strip().split())

    print("Remove all:", f'"{all_spaces}"')
    print("Trim:", f'"{trimmed}"')
    print("Single spaces:", f'"{single_spaces}"')

clean_spaces(" hello world ")
print("---")
clean_spaces("programming is fun")
print("---")
clean_spaces(" a   b     c ")
