def compress_string(s: str) -> str:
    if not s:
        return s

    compressed = []
    count = 1

    for i in range(1, len(s)):
        if s[i] == s[i - 1]:
            count += 1
        else:
            compressed.append(s[i - 1] + str(count))
            count = 1
    compressed.append(s[-1] + str(count))

    compressed_str = ''.join(compressed)
    return compressed_str if len(compressed_str) < len(s) else s

# Test Cases
print(compress_string("aabcccccaaa"))  # a2b1c5a3
print(compress_string("abc"))         # abc
print(compress_string("aabbcc"))      # a2b2c2
