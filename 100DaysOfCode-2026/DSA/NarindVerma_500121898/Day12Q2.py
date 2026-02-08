def remove_duplicates(s: str) -> str:
    seen = set()
    result = []
    for char in s:
        if char not in seen:
            seen.add(char)
            result.append(char)
    return ''.join(result)

# Test Cases
print(remove_duplicates("programming"))  # progamin
print(remove_duplicates("hello"))        # helo
print(remove_duplicates("aabbcc"))       # abc
