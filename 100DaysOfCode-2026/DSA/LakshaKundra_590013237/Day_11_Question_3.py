def is_palindrome(s):
    return s == s[::-1]

def count_palindromic_substrings(s):
    count = 0
    n = len(s)

    for i in range(n):
        for j in range(i + 1, n + 1):
            if is_palindrome(s[i:j]):
                count += 1

    return count

print(count_palindromic_substrings("abc"))
print(count_palindromic_substrings("aaa"))
print(count_palindromic_substrings("aba"))
