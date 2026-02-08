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
            count = 1  # counter counts new character

    compressed.append(s[-1] + str(count))   # counts the revious character and moves on to next character

    compressed_str = ''.join(compressed)
    
    return compressed_str if len(compressed_str) < len(s) else s
