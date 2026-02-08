def clrspace(text):
    removed = text.replace(" ", "")
    
    trimmed = text.strip()
    
    single = ' '.join(text.split())

    return removed, trimmed, single

inp = input("Enter a string: ")

removed, trimmed, single = clrspace(inp)

print(f"Remove all: \"{removed}\"")
print(f"Trim: \"{trimmed}\"")
print(f"Single spaces: \"{single}\"")
