def firstUniqueChar(s):
    frequency = {}

    for char in s:
        frequency[char] = frequency.get(char, 0) + 1

    for char in s:
        if frequency[char] == 1:
            return char

    return -1

inp = input("Enter a string: ")

result = firstUniqueChar(inp)

print(f"First unique character: {result}")
