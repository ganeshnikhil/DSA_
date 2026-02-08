def remove_duplicates(s):
    seen = set()
    result = []

    for char in s:
        if char not in seen:
            seen.add(char)
            result.append(char)

    return ''.join(result)

input_string = "aabbcc"
print(remove_duplicates(input_string)) 
