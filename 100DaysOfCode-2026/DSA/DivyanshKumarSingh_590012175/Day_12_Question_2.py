def remDuplicate(s):
    seen = set() 
    res = []

    for char in s:
        if char not in seen:
            seen.add(char)     
            res.append(char)   

    return ''.join(res)


inp = input("Enter a string: ")

res = remDuplicate(inp)

print("String after removing Duplicate characters:", res)
