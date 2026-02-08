def compress_string(s):
    if not s:
        return s
    result = ''
    count = 1
    for i in range(1, len(s)):
        if s[i] == s[i - 1]:
            count += 1
        else:
            result += s[i - 1] + str(count)
            count = 1
    result += s[-1] + str(count)
    return result if len(result) < len(s) else s

print(compress_string("aabcccccaaa"))
print(compress_string("abc"))
print(compress_string("aabbcc"))
