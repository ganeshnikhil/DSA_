# Implement three space removal operations: all spaces, trim, and single spaces.
text = input("enter string :")
remove_all = text.replace(" ", "")
trim = text.strip()
single_spaces = ' '.join(text.split())

print(f'Input:\n"{text}"')
print(f'Output:\nRemove all: "{remove_all}", Trim: "{trim}", Single spaces: "{single_spaces}"\n')

