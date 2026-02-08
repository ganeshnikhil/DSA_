import re

def remove_spaces(text):
    all_spaces = text.replace(" ", "")
    trimmed = text.strip()
    single_spaced = re.sub(r'\s+', ' ', trimmed)
    return all_spaces, trimmed, single_spaced

print(remove_spaces(" hello world "))
print(remove_spaces("programming is fun"))
print(remove_spaces(" a   b     c "))
