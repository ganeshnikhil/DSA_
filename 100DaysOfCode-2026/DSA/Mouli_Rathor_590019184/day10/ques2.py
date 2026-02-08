def remove_all_spaces(input_string):
    """Remove all spaces from the string."""
    return input_string.replace(" ", "")

def trim_spaces(input_string):
    """Remove leading and trailing spaces from the string."""
    return input_string.strip()

def reduce_extra_spaces(input_string):
    """Reduce multiple spaces between words to a single space."""
    return ' '.join(input_string.split())

input_string = "  hello  my  name is mouli   rathor   "

all_spaces_removed = remove_all_spaces(input_string)
trimmed_string = trim_spaces(input_string)
reduced_spaces_string = reduce_extra_spaces(input_string)

print("Original String:")
print(f'"{input_string}"')
print("\nAll Spaces Removed:")
print(f'"{all_spaces_removed}"')
print("\nTrimmed String:")
print(f'"{trimmed_string}"')
print("\nReduced Extra Spaces:")
print(f'"{reduced_spaces_string}"')
