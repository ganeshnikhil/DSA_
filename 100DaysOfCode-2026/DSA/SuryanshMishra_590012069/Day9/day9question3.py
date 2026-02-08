def first_non_repeating_char(s):
    freq = {}
    
    # Count frequency of each character
    for c in s:
        freq[c] = freq.get(c, 0) + 1
    
    # Find first character with frequency 1
    for c in s:
        if freq[c] == 1:
            return c
    
    return None

def main_non_repeating():
    s = input("Enter a string: ")
    result = first_non_repeating_char(s)
    
    if result is None:
        print("No non-repeating character found.")
    else:
        print(f"First non-repeating character: {result}")