def longest_palindromic_substring(s):
    n = len(s)
    if n == 0:
        return ""

    start, max_len = 0, 1

    for i in range(n):
        # Odd-length palindrome
        l, r = i, i
        while l >= 0 and r < n and s[l] == s[r]:
            if (r - l + 1) > max_len:
                start = l
                max_len = r - l + 1
            l -= 1
            r += 1

        # Even-length palindrome
        l, r = i, i + 1
        while l >= 0 and r < n and s[l] == s[r]:
            if (r - l + 1) > max_len:
                start = l
                max_len = r - l + 1
            l -= 1
            r += 1

    return s[start:start + max_len]

# User input
user_input = input("Enter a string to find the longest palindromic substring: ")
print("Output:", longest_palindromic_substring(user_input))