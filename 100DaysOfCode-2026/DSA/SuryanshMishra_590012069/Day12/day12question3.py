def compress_string(s):
    """
    Compress string using run-length encoding.
    Return original string if compressed version is not smaller.
    
    Approach: Count consecutive characters and build compressed string.
    
    Time Complexity: O(n) where n is the length of the string
    Space Complexity: O(n) for the result string
    """
    if not s:
        return s
    
    compressed = []
    current_char = s[0]
    count = 1
    
    # Count consecutive characters
    for i in range(1, len(s)):
        if s[i] == current_char:
            count += 1
        else:
            # Add current character and count to result
            compressed.append(current_char + str(count))
            current_char = s[i]
            count = 1
    
    # Add the last character and count
    compressed.append(current_char + str(count))
    
    compressed_string = ''.join(compressed)
    
    # Return original if compressed is not smaller
    return compressed_string if len(compressed_string) < len(s) else s

# Test cases for Problem 3
print("Problem 3: Compress String")
print(f'compress_string("aabcccccaaa"): "{compress_string("aabcccccaaa")}"')  # "a2b1c5a3"
print(f'compress_string("abc"): "{compress_string("abc")}"')  # "abc" (original returned)
print(f'compress_string("aabbcc"): "{compress_string("aabbcc")}"')  # "a2b2c2"