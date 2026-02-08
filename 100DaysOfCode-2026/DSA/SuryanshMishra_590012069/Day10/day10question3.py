def check_anagram(str1, str2):
    """
    Check if two strings are anagrams of each other.
    Ignores case and spaces for comparison.
    Uses character frequency analysis.
    """
    # Normalize strings: remove spaces and convert to lowercase
    normalized1 = str1.replace(" ", "").lower()
    normalized2 = str2.replace(" ", "").lower()
    
    # Quick check: if lengths are different, they can't be anagrams
    if len(normalized1) != len(normalized2):
        return False
    
    # Count character frequencies using dictionaries
    char_count1 = {}
    char_count2 = {}
    
    # Count characters in first string
    for char in normalized1:
        char_count1[char] = char_count1.get(char, 0) + 1
    
    # Count characters in second string
    for char in normalized2:
        char_count2[char] = char_count2.get(char, 0) + 1
    
    # Compare character frequency dictionaries
    return char_count1 == char_count2


def check_anagram_alternative(str1, str2):
    """
    Alternative implementation using sorted strings.
    This is more concise but less educational for frequency analysis.
    """
    # Normalize and sort both strings
    normalized1 = sorted(str1.replace(" ", "").lower())
    normalized2 = sorted(str2.replace(" ", "").lower())
    
    return normalized1 == normalized2


def demo_anagram_check():
    """Demonstrate anagram checking with given examples."""
    
    print("ANAGRAM CHECK DEMO")
    print("=" * 40)
    
    # Test cases from the problem
    test_cases = [
        ("listen", "silent"),
        ("hello", "world"),
        ("The Eyes", "They See"),
        # Additional test cases
        ("evil", "vile"),
        ("A gentleman", "Elegant man"),
        ("Conversation", "Voices rant on")
    ]
    
    for str1, str2 in test_cases:
        result = check_anagram(str1, str2)
        print(f'String1: "{str1}", String2: "{str2}"')
        print(f"Are anagrams: {result}")
        
        # Show the normalized versions for clarity
        norm1 = str1.replace(" ", "").lower()
        norm2 = str2.replace(" ", "").lower()
        print(f"Normalized: '{norm1}' vs '{norm2}'")
        print("-" * 40)


def show_character_frequency(text):
    """Helper function to show character frequency analysis."""
    normalized = text.replace(" ", "").lower()
    char_count = {}
    
    for char in normalized:
        char_count[char] = char_count.get(char, 0) + 1
    
    # Sort by character for consistent display
    sorted_chars = sorted(char_count.items())
    return dict(sorted_chars)


def detailed_anagram_analysis(str1, str2):
    """Provide detailed analysis showing character frequencies."""
    
    print(f"\nDETAILED ANALYSIS:")
    print(f"String 1: '{str1}'")
    freq1 = show_character_frequency(str1)
    print(f"Character frequencies: {freq1}")
    
    print(f"String 2: '{str2}'")
    freq2 = show_character_frequency(str2)
    print(f"Character frequencies: {freq2}")
    
    result = check_anagram(str1, str2)
    print(f"Are anagrams: {result}")
    
    if result:
        print("✓ Character frequencies match!")
    else:
        print("✗ Character frequencies don't match.")


def interactive_anagram_check():
    """Interactive version for testing custom inputs."""
    
    print("\nINTERACTIVE ANAGRAM CHECKER")
    print("=" * 40)
    
    while True:
        str1 = input("Enter first string (or 'quit' to exit): ")
        if str1.lower() == 'quit':
            break
            
        str2 = input("Enter second string: ")
        
        # Basic check
        result = check_anagram(str1, str2)
        print(f"Are anagrams: {result}")
        
        # Ask if user wants detailed analysis
        detail = input("Show detailed analysis? (y/n): ")
        if detail.lower() == 'y':
            detailed_anagram_analysis(str1, str2)
        
        print("-" * 40)


if __name__ == "__main__":
    # Run demonstration with examples
    demo_anagram_check()
    
    # Start interactive mode
    interactive_anagram_check()