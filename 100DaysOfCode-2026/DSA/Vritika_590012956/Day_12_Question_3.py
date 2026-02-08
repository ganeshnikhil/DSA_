def compress_string(s: str) -> str:
    if not s:
        return s

    compressed = ""
    count = 1

    for i in range(1, len(s)):
        if s[i] == s[i - 1]:
            count += 1
        else:
            compressed += s[i - 1] + str(count)
            count = 1

    # Add the last character and its count
    compressed += s[-1] + str(count)
    return compressed

input_string = input("Enter a string: ")
print("Compressed output:", compress_string(input_string))
