def reverse_words(s):
    """
    Reverse the order of words in a string while keeping each word intact.
    Preserves single spaces between words in the output.
    
    Args:
        s (str): Input string with words separated by spaces
        
    Returns:
        str: String with words in reversed order
    """
    # Handle empty string or string with only spaces
    if not s or s.isspace():
        return ""
    
    # Split into words (automatically handles multiple spaces)
    words = s.split()
    
    # Reverse the order of words
    reversed_words = words[::-1]
    
    # Join with single spaces
    return " ".join(reversed_words)

# Alternative solution using built-in reversed()
def reverse_words_v2(s):
    """
    Alternative solution using reversed() function.
    """
    if not s or s.isspace():
        return ""
    
    words = s.split()
    return " ".join(reversed(words))

# Manual approach without using slice notation
def reverse_words_manual(s):
    """
    Manual approach that reverses words without using slice notation.
    """
    if not s or s.isspace():
        return ""
    
    words = s.split()
    reversed_words = []
    
    # Manually reverse the list
    for i in range(len(words) - 1, -1, -1):
        reversed_words.append(words[i])
    
    return " ".join(reversed_words)

# Test the function
if __name__ == "__main__":
    test_cases = [
        "Hello World Programming",
        "The quick brown fox", 
        "Java Python C++",
        "single",                    # Single word
        "",                         # Empty string
        "   ",                      # Only spaces
        "  multiple   spaces  between   words  "  # Multiple spaces
    ]
    
    for test in test_cases:
        result = reverse_words(test)
        print(f'Input: "{test}"')
        print(f'Output: "{result}"')
        print()