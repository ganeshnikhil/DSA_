string = input("Enter a string: ")

char = input("Enter the character to search: ")


count = 0
for c in string:
    if c == char:
        count += 1

print(f"The character '{char}' occurs {count} times.")
