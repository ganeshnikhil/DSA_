def is_palindrome(s):
    return s == s[::-1]

def longest_palindromic_substring_brute(s):
    n = len(s)
    longest = ""

    for i in range(n):
        for j in range(i, n):
            substring = s[i:j+1]
            if is_palindrome(substring) and len(substring) > len(longest):
                longest = substring

    return longest
user_input = input("Enter a string: ")
result = longest_palindromic_substring_brute(user_input)
print("Longest Palindromic Substring:", result)