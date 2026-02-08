def compress_string(s):
    if not s:
        return s
    
    compressed = []
    count = 1
    current_char = s[0]
    
    for char in s[1:]:
        if char == current_char:
            count += 1
        else:
            compressed.append(current_char + str(count))
            current_char = char
            count = 1
    compressed.append(current_char + str(count))
    
    compressed_str = ''.join(compressed)
    return compressed_str if len(compressed_str) < len(s) else s

print(compress_string("aabcccccaaa"))  
print(compress_string("abc"))         
print(compress_string("aabbcc"))       
print(compress_string("a"))            
          