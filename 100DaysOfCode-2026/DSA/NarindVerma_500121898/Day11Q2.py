def longest_palindromic_substring(s: str) -> str:
    if not s:
        return ""

    start = end = 0

    def expand(left: int, right: int) -> None:
        nonlocal start, end
        while left >= 0 and right < len(s) and s[left] == s[right]:
            if (right - left) > (end - start):
                start, end = left, right
            left -= 1
            right += 1

    for i in range(len(s)):
        expand(i, i)     # Odd-length
        expand(i, i + 1) # Even-length

    return s[start:end + 1]

# Example test cases
print(longest_palindromic_substring("babad"))   # "bab" or "aba"
print(longest_palindromic_substring("cbbd"))    # "bb"
print(longest_palindromic_substring("racecar")) # "racecar"
