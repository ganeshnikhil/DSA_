def longest_palindrome(s):
    result = ""
    for i in range(len(s)):
        for j in (i, i+1):
            l, r = i, j
            while l >= 0 and r < len(s) and s[l] == s[r]:
                if (r - l + 1) > len(result):
                    result = s[l:r+1]
                l -= 1
                r += 1
    return result

# Examples
print(longest_palindrome("babad"))   # "bab" or "aba"
print(longest_palindrome("cbbd"))    # "bb"
