def word_count_and_longest(text):
    """
    Count words and find the longest word in a string.
    Handles leading/trailing spaces and multiple spaces between words.
    
    Args:
        text (str): Input string
        
    Returns:
        str: Formatted result with word count and longest word
    """
    # Handle empty string or string with only spaces
    if not text or text.isspace():
        return "Word count: 0, Longest word: \"\""
    
    # Split by whitespace and filter out empty strings
    words = [word for word in text.split() if word]
    
    # Count words
    word_count = len(words)
    
    # Find longest word (if multiple words have same max length, take the first one)
    longest_word = ""
    if words:
        longest_word = max(words, key=len)
    
    return f'Word count: {word_count}, Longest word: "{longest_word}"'

# Test the function
if __name__ == "__main__":
    # Test cases
    test_cases = [
        "Hello world programming",
        " Java Python C++ ",
        "a bb ccc dddd",
        "",  # empty string
        "   ",  # only spaces
        "single",  # single word
        "  multiple   spaces   between  words  "
    ]
    
    for test in test_cases:
        result = word_count_and_longest(test)
        print(f'Input: "{test}"')
        print(f'Output: {result}')
        print()