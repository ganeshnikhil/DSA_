def str_compress(s):
    if not s:
        return s
    compressed = ""
    count = 1
    for i in range(1, len(s)):
        if s[i] == s[i-1]:
            count += 1
        else:
            compressed += s[i-1] + str(count)
            count = 1
    compressed += s[-1] + str(count)
    return compressed if len(compressed) < len(s) else s

print(str_compress(s=input("enter your word: ")))