def string_comparison(str1, str2):
    """
    Compare two strings and determine their relationship.
    Checks for exact equality, case-insensitive equality, and lexicographical order.
    """
    # Check exact equality
    exact_equal = str1 == str2
    
    # Check case-insensitive equality
    case_insensitive_equal = str1.lower() == str2.lower()
    
    # Determine lexicographical order
    if str1 == str2:
        order = "Strings are identical"
    elif str1 < str2:
        order = f'"{str1}" comes before "{str2}"'
    else:
        order = f'"{str2}" comes before "{str1}"'
    
    # Format output
    exact_result = "Equal" if exact_equal else "Not equal"
    case_result = "Equal ignoring case" if case_insensitive_equal else "Not equal ignoring case"
    
    return f"{exact_result}, {case_result}, {order}"


def demo_string_comparison():
    """Demonstrate string comparison with given examples."""
    
    print("STRING COMPARISON DEMO")
    print("=" * 40)
    
    # Test cases from the problem
    test_cases = [
        ("Hello", "hello"),
        ("apple", "banana"),
        ("test", "test")
    ]
    
    for str1, str2 in test_cases:
        result = string_comparison(str1, str2)
        print(f'String1: "{str1}", String2: "{str2}"')
        print(f"Output: {result}")
        print("-" * 40)


def interactive_comparison():
    """Interactive version for testing custom inputs."""
    
    print("\nINTERACTIVE STRING COMPARISON")
    print("=" * 40)
    
    while True:
        str1 = input("Enter first string (or 'quit' to exit): ")
        if str1.lower() == 'quit':
            break
            
        str2 = input("Enter second string: ")
        result = string_comparison(str1, str2)
        print(f"Result: {result}")
        print("-" * 40)


if __name__ == "__main__":
    # Run demonstration with examples
    demo_string_comparison()
    
    # Start interactive mode
    interactive_comparison()