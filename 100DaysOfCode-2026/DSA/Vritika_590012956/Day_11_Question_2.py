def longest_palindrome(s: str) -> str:
    if not s:
        return ""
    longest = ""
    for i in range(len(s)):
        # Check for odd-length palindromes
        for j in range(i + 1, len(s) + 1):
            substring = s[i:j]
            if substring == substring[::-1] and len(substring) > len(longest):
                longest = substring
    
    return longest
  
user_input = input("Enter a string to find the longest palindromic substring: ")
result = longest_palindrome(user_input)
print("The longest palindromic substring is:", result)
