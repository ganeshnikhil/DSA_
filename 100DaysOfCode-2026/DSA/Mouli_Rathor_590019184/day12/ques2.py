def remove_duplicates(input_string):
    seen = set()
    result = []

    for char in input_string:
        if char not in seen:
            seen.add(char)
            result.append(char)

    return ''.join(result)

# Example usage
print(remove_duplicates("programming"))  # Output: "progamin"
print(remove_duplicates("hello"))        # Output: "helo"
print(remove_duplicates("aabbcc"))       # Output: "abc"
