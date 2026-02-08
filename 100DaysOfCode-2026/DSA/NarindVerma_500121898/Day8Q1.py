def string_length_and_case_variants(s):
    length = len(s)
    upper = s.upper()
    lower = s.lower()
    print(f'Length: {length}, Original: "{s}", Uppercase: "{upper}", Lowercase: "{lower}"')

# Example test cases
string_length_and_case_variants("Hello World")
string_length_and_case_variants("Python")
string_length_and_case_variants("Programming123")
