def function(input_str):
    cleaned = ''.join([ch.lower() for ch in input_str if ch.isalpha()])
    return cleaned == cleaned[::-1]


text = input("Enter a string: ")
result = function(text)

print("true" if result else "false")
