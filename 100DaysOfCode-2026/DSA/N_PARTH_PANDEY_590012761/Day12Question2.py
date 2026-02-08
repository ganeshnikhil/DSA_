def remove_duplicates(s):
    seen = set()
    result = []
    for char in s:
        if char not in seen:
            seen.add(char)
            result.append(char)
    return ''.join(result)


print(remove_duplicates("programming"))  # Output: "progamin"
print(remove_duplicates("hello"))        # Output: "helo"
print(remove_duplicates(""))             