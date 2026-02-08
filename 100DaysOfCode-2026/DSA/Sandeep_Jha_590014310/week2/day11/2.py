def longest_palindromic_substrings(s):
    # Transform s to add boundaries to handle even-length palindromes
    t = '#' + '#'.join(s) + '#'
    n = len(t)
    p = [0] * n
    center = 0
    right = 0
    max_length = 0
    result = set()

    for i in range(n):
        mirror = 2 * center - i
        if i < right:
            p[i] = min(right - i, p[mirror])
        # Expand around center i
        a = i + p[i] + 1
        b = i - p[i] - 1
        while a < n and b >= 0 and t[a] == t[b]:
            p[i] += 1
            a += 1
            b -= 1
        # Update center and right boundary
        if i + p[i] > right:
            center = i
            right = i + p[i]
        # Track max length
        if p[i] > max_length:
            max_length = p[i]
            result = set()
        if p[i] == max_length and max_length > 0:
            # Extract the palindrome from the original string
            start = (i - max_length) // 2
            result.add(s[start:start + max_length])
    return list(result)

print(longest_palindromic_substrings(s=input("enter your word: ")))
