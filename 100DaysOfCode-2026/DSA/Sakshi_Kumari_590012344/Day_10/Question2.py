Your task: Implement three space removal operations: all spaces, trim, and single spaces.
  
text = input("Enter a string: ")

no_spaces = text.replace(" ", "")
trimmed = text.strip()
single_space = ' '.join(text.strip().split())

print("No spaces:", no_spaces)
print("Trimmed:", trimmed)
print("Single spaces only:", single_space)
