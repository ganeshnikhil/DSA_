# Problem 3: Compress String (Run-Length Encoding)
# Compress a string by replacing sequences of the same 
# character with that character followed by the number of repetitions.
# Only return the compressed version if it’s shorter than the original.
# Example: "aabcccccaaa" → "a2b1c5a3"
def func(s):
    if not s:
        return s
    compressed = ''
    count = 1
 # Iterate through the string starting from the second character
    for i in range(1, len(s)):
        if s[i] == s[i - 1]:
            count += 1
        else:
            # Append the character and its count to the compressed strin
            compressed += s[i - 1] + str(count)
            count = 1
# Append the last character and its count
    compressed += s[-1] + str(count)
    return compressed if len(compressed) < len(s) else s

text = input()
compressed_text = func(text)
print(compressed_text)