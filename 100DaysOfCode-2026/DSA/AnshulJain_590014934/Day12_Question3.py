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
    result = ''.join(compressed)
    return result if len(result) < len(s) else s

s = input("Enter a string: ").strip()
print(compress_string(s))
#taking input from the user 
# Example usage:
# input: "aaabbcdddde"
# output: "a3b2c1d4"