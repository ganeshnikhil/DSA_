def first_non_repeating(s):
    char_count = {}
    
    # Count frequencies
    for char in s:
        char_count[char] = char_count.get(char, 0) + 1
    
    # Find first non-repeating by iterating through original string
    for i, char in enumerate(s):  # Fixed: iterate through original string
        if char_count[char] == 1:
            return i  # Return index directly
    
    return -1