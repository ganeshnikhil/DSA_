def first_non_repeating(s):
    char_count = {}
    for char in s:
        char_count[char] = char_count.get(char, 0) + 1
    for i, char in enumerate(s):
        if char_count[char] == 1:
            return i
    return -1

# Example usage
test = "aabbcde"
index = first_non_repeating(test)
if index != -1:
    print(f"First non-repeating character is '{test[index]}' at index {index}")
else:
    print("No non-repeating character found")
