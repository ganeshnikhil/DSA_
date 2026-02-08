def compress_string(s):
    compressed = []
    count = 1
    for i in range(1, len(s) + 1):
        if i < len(s) and s[i] == s[i - 1]:
            count += 1
        else:
            compressed.append(f"{s[i - 1]}{count}")
            count = 1
    compressed_str = ''.join(compressed)
    return compressed_str if len(compressed_str) < len(s) else s

# Example usage
print(compress_string("aabcccccaaa"))  # a2b1c5a3
