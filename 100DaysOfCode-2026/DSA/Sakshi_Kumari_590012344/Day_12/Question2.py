Your task: Remove duplicate characters while preserving first occurrence order.
def remove_duplicates(text):
    result = ""
    seen = set()
    for char in text:
        if char not in seen:
            result += char
            seen.add(char)
    return result
user_input = input("Enter a string: ")
unique_output = remove_duplicates(user_input)
print("String after removing duplicates:", unique_output)

