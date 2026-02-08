def compress(s):
    if not s:
        return ""
    
    compressed = []
    c = 1

    for i in range(1, len(s)):
        if s[i] == s[i - 1]:
            c += 1
        else:
            compressed.append(s[i - 1] + str(c))
            c = 1

    compressed.append(s[-1] + str(c))

    cs = ''.join(compressed)

    
    return cs if len(cs) <= len(s) else s

inp = input("Enter a string: ").strip()
print("Compressed String:", compress(inp))
