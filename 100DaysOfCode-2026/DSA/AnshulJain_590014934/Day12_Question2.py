def remove_duplicates(s: str) -> str:
    seen = set()
    result = []
    for char in s:
        if char not in seen:
            seen.add(char)
            result.append(char)
    return ''.join(result)

s = input("Enter a string: ").strip()
print(remove_duplicates(s))
#taking input from the user
# Example usage:
#input: "AANNSSHHUULL"
#output: "ANSHUL"