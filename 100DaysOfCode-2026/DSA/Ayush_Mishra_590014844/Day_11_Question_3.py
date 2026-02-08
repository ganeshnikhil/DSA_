def count_palindromic_substrings(s):
    count = 0
    for center in range(len(s)):
        for offset in (0, 1):
            l, r = center, center + offset
            while l >= 0 and r < len(s) and s[l] == s[r]:
                count += 1
                l -= 1
                r += 1
    return count

# Examples
print(count_palindromic_substrings("abc"))   # 3
print(count_palindromic_substrings("aaa"))   # 6
