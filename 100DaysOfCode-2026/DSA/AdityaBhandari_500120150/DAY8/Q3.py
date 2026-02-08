def reverseString(s):
    res = []
    for i in range(len(s) - 1, -1, -1):
        res.append(s[i])
    return ''.join(res)


s = "hello"
print(reverseString(s))

s = "world"
print(reverseString(s))

s = "12345"
print(reverseString(s))

