def count_palindromic_substrings(s):
    n = len(s)
    count = 0
    for i in range(n):
        l, r = i, i
        while l >= 0 and r < n and s[l] == s[r]:
            count += 1
            l -= 1
            r += 1
        l, r = i, i + 1
        while l >= 0 and r < n and s[l] == s[r]:
            count += 1
            l -= 1
            r += 1
    return count

print(count_palindromic_substrings("abc"))
print(count_palindromic_substrings("aaa"))
print(count_palindromic_substrings("aba"))
