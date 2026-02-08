def remove_duplicates(s):
    seen = set()
    result = ''
    for c in s:
        if c not in seen:
            result += c
            seen.add(c)
    return result

print(remove_duplicates("programming"))
print(remove_duplicates("hello"))
print(remove_duplicates("aabbcc"))
