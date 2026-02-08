def longest_palindromic_substring(s):
    """
    Problem 2: Longest Palindromic Substring
    
    Finds the longest palindromic substring using the "expand around centers" approach.
    
    Time Complexity: O(n²)
    Space Complexity: O(1)
    
    Args:
        s (str): Input string
        
    Returns:
        str: Longest palindromic substring
    """
    if not s:
        return ""
    
    start = 0
    max_len = 1
    
    def expand_around_center(left, right):
        """Helper function to expand around center and return length"""
        while left >= 0 and right < len(s) and s[left] == s[right]:
            left -= 1
            right += 1
        return right - left - 1
    
    for i in range(len(s)):
        # Check for odd-length palindromes (center at i)
        len1 = expand_around_center(i, i)
        
        # Check for even-length palindromes (center between i and i+1)
        len2 = expand_around_center(i, i + 1)
        
        # Get the maximum length palindrome centered at i
        current_max = max(len1, len2)
        
        # Update global maximum if current is longer
        if current_max > max_len:
            max_len = current_max
            # Calculate start position based on center and length
            start = i - (current_max - 1) // 2
    
    return s[start:start + max_len]


def longest_palindromic_substring_dp(s):
    """
    Alternative Dynamic Programming solution for educational purposes
    
    Time Complexity: O(n²)
    Space Complexity: O(n²)
    """
    if not s:
        return ""
    
    n = len(s)
    # dp[i][j] represents whether substring s[i:j+1] is palindrome
    dp = [[False] * n for _ in range(n)]
    
    start = 0
    max_len = 1
    
    # Every single character is a palindrome
    for i in range(n):
        dp[i][i] = True
    
    # Check for palindromes of length 2
    for i in range(n - 1):
        if s[i] == s[i + 1]:
            dp[i][i + 1] = True
            start = i
            max_len = 2
    
    # Check for palindromes of length 3 and more
    for length in range(3, n + 1):
        for i in range(n - length + 1):
            j = i + length - 1
            
            # Check if current substring is palindrome
            if s[i] == s[j] and dp[i + 1][j - 1]:
                dp[i][j] = True
                start = i
                max_len = length
    
    return s[start:start + max_len]


# Test with provided examples
if __name__ == "__main__":
    # Test cases from the problem
    test_cases = [
        "babad",
        "cbbd", 
        "racecar"
    ]
    
    print("=== Problem 2: Longest Palindromic Substring ===")
    for test in test_cases:
        result = longest_palindromic_substring(test)
        print(f'Input: "{test}"')
        print(f'Output: "{result}"')
        print()
    
    # Additional test cases
    additional_tests = [
        "a",
        "ac",
        "abacabad",
        "noon",
        "abccba"
    ]
    
    print("Additional test cases:")
    for test in additional_tests:
        result1 = longest_palindromic_substring(test)
        result2 = longest_palindromic_substring_dp(test)
        print(f'"{test}" -> Expand: "{result1}", DP: "{result2}"')
    
    print("\nNote: Both approaches may return different valid answers")
    print("when multiple palindromes have the same maximum length.")