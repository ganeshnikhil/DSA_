def remove_all_spaces(s):
    return s.replace(" ", "")
def trim_spaces(s):
    return s.strip()
def remove_extra_inner_spaces(s):
    return ' '.join(s.split())
text = input("Enter a string: ")
print("All spaces removed:     ", repr(remove_all_spaces(text)))
print("Trimmed (no ends):      ", repr(trim_spaces(text)))
print("Single spaced cleaned:  ", repr(remove_extra_inner_spaces(text)))
 # Taking input from the user
# EXAMPLE: String1: a b c
# Output will be:
    #  All spaces removed:      'abc'
    # Trimmed (no ends):       'a b c'
    # Single spaced cleaned:   'a b c'
        