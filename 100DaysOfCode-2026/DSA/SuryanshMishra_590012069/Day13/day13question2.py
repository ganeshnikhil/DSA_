def can_form_palindrome(s):
    """
    Check if any permutation of the string can form a palindrome.
    
    For a string to form a palindrome:
    - At most one character can have an odd frequency
    - All other characters must have even frequencies
    
    Args:
        s (str): Input string
        
    Returns:
        bool: True if any permutation can form a palindrome, False otherwise
    """
    # Count frequency of each character
    char_count = {}
    for char in s:
        char_count[char] = char_count.get(char, 0) + 1
    
    # Count how many characters have odd frequencies
    odd_count = 0
    for count in char_count.values():
        if count % 2 == 1:
            odd_count += 1
    
    # At most one character can have odd frequency for palindrome
    return odd_count <= 1

# Alternative solution using collections.Counter
from collections import Counter

def can_form_palindrome_v2(s):
    """
    Alternative solution using Counter for cleaner code.
    """
    char_count = Counter(s)
    odd_count = sum(1 for count in char_count.values() if count % 2 == 1)
    return odd_count <= 1

# Test the function
if __name__ == "__main__":
    test_cases = [
        "aab",      # Expected: True (can form "aba")
        "abc",      # Expected: False 
        "aabbcc",   # Expected: True (can form "abccba")
        "a",        # Expected: True (single character)
        "",         # Expected: True (empty string)
        "aabbc",    # Expected: False (three odd frequencies: a=2, b=2, c=1)
        "racecar",  # Expected: True (already a palindrome)
    ]
    
    for test in test_cases:
        result = can_form_palindrome(test)
        print(f'Input: "{test}"')
        print(f'Output: {result}')
        print()