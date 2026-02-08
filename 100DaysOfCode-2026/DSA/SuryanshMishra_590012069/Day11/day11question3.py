def count_palindromic_substrings(s):
    """
    Problem 3: Count Palindromic Substrings
    
    Counts all palindromic substrings using expand around centers approach.
    
    Time Complexity: O(n²)
    Space Complexity: O(1)
    
    Args:
        s (str): Input string
        
    Returns:
        int: Total count of palindromic substrings
    """
    if not s:
        return 0
    
    count = 0
    
    def expand_and_count(left, right):
        """Helper function to expand around center and count palindromes"""
        nonlocal count
        while left >= 0 and right < len(s) and s[left] == s[right]:
            count += 1
            left -= 1
            right += 1
    
    for i in range(len(s)):
        # Count odd-length palindromes (center at i)
        expand_and_count(i, i)
        
        # Count even-length palindromes (center between i and i+1)
        expand_and_count(i, i + 1)
    
    return count


def count_palindromic_substrings_with_details(s):
    """
    Enhanced version that shows all palindromic substrings found.
    Useful for understanding how the algorithm works.
    """
    if not s:
        return 0, []
    
    palindromes = []
    
    def expand_and_collect(left, right):
        """Helper function to expand around center and collect palindromes"""
        while left >= 0 and right < len(s) and s[left] == s[right]:
            palindromes.append(s[left:right + 1])
            left -= 1
            right += 1
    
    for i in range(len(s)):
        # Collect odd-length palindromes
        expand_and_collect(i, i)
        # Collect even-length palindromes
        expand_and_collect(i, i + 1)
    
    return len(palindromes), palindromes


def count_palindromic_substrings_brute_force(s):
    """
    Brute force approach for comparison and verification
    
    Time Complexity: O(n³)
    Space Complexity: O(1)
    
    This approach checks every possible substring to see if it's a palindrome.
    Less efficient but easier to understand.
    """
    if not s:
        return 0
    
    def is_palindrome(substr):
        """Check if a substring is palindrome"""
        return substr == substr[::-1]
    
    count = 0
    n = len(s)
    
    # Check all possible substrings
    for i in range(n):
        for j in range(i, n):
            if is_palindrome(s[i:j+1]):
                count += 1
    
    return count


# Test with provided examples
if __name__ == "__main__":
    # Test cases from the problem
    test_cases = [
        "abc",
        "aaa",
        "aba"
    ]
    
    print("=== Problem 3: Count Palindromic Substrings ===")
    for test in test_cases:
        count = count_palindromic_substrings(test)
        _, palindromes = count_palindromic_substrings_with_details(test)
        print(f'Input: "{test}"')
        print(f'Output: {count}')
        print(f'Palindromes found: {palindromes}')
        print()
    
    # Additional test cases with detailed breakdown
    additional_tests = [
        "abccba",
        "racecar",
        "noon",
        "a"
    ]
    
    print("Additional test cases:")
    for test in additional_tests:
        count1 = count_palindromic_substrings(test)
        count2 = count_palindromic_substrings_brute_force(test)
        _, palindromes = count_palindromic_substrings_with_details(test)
        
        print(f'"{test}":')
        print(f'  Count (Expand): {count1}')
        print(f'  Count (Brute):  {count2}')
        print(f'  Palindromes: {palindromes}')
        print(f'  Verification: {"✓" if count1 == count2 else "✗"}')
        print()
    
    # Explanation of counting for "abc"
    print("=== Detailed explanation for 'abc' ===")
    print("Single character palindromes: 'a', 'b', 'c' = 3 palindromes")
    print("Two character substrings: 'ab', 'bc' = 0 palindromes")  
    print("Three character substring: 'abc' = 0 palindromes")
    print("Total: 3 palindromes")
    
    print("\n=== Detailed explanation for 'aaa' ===")
    print("Single characters: 'a', 'a', 'a' = 3 palindromes")
    print("Two characters: 'aa' (pos 0-1), 'aa' (pos 1-2) = 2 palindromes")
    print("Three characters: 'aaa' = 1 palindrome")
    print("Total: 6 palindromes")