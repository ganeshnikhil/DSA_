def is_palindrome(s):
    return s == s[::-1]

def longest_palindrome(s):
    longest = ""
    n = len(s)

    for i in range(n):
        for j in range(i + 1, n + 1):
            part = s[i:j]
            if is_palindrome(part) and len(part) > len(longest):
                longest = part

    return longest

print(longest_palindrome("babad"))
print(longest_palindrome("cbbd"))
print(longest_palindrome("racecar"))
