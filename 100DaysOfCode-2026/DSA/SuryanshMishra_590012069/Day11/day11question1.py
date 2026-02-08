def is_palindrome_advanced(s):
    """
    Problem 1: Palindrome Ignoring Spaces and Punctuation
    
    Checks if a string is a palindrome ignoring spaces, punctuation, and case.
    Only considers alphabetic and numeric characters.
    
    Time Complexity: O(n)
    Space Complexity: O(1)
    
    Args:
        s (str): Input string to check
        
    Returns:
        bool: True if palindrome, False otherwise
    """
    if not s:
        return True
    
    # Convert to lowercase for case-insensitive comparison
    s = s.lower()
    
    # Two pointers approach - space efficient
    left, right = 0, len(s) - 1
    
    while left < right:
        # Skip non-alphanumeric characters from left
        while left < right and not s[left].isalnum():
            left += 1
        
        # Skip non-alphanumeric characters from right
        while left < right and not s[right].isalnum():
            right -= 1
        
        # Compare characters
        if s[left] != s[right]:
            return False
        
        left += 1
        right -= 1
    
    return True


# Test with provided examples
if __name__ == "__main__":
    # Test cases from the problem
    test_cases = [
        "A man, a plan, a canal: Panama",
        "race a car",
        "Was it a car or a cat I saw?"
    ]
    
    print("=== Problem 1: Advanced Palindrome Checker ===")
    for test in test_cases:
        result = is_palindrome_advanced(test)
        print(f'Input: "{test}"')
        print(f'Output: {result}')
        print()
    
    # Additional test cases
    additional_tests = [
        "",
        "a",
        "Madam",
        "No 'x' in Nixon",
        "12321",
        "A Santa at NASA"
    ]
    
    print("Additional test cases:")
    for test in additional_tests:
        result = is_palindrome_advanced(test)
        print(f'"{test}" -> {result}')