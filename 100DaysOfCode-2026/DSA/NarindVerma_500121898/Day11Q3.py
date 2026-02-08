def count_palindromic_substrings(s: str) -> int:
    n = len(s)
    count = 0

    def expand(left: int, right: int) -> None:
        nonlocal count
        while left >= 0 and right < n and s[left] == s[right]:
            count += 1
            left -= 1
            right += 1

    for i in range(n):
        expand(i, i)     # Odd-length
        expand(i, i + 1) # Even-length

    return count

# Example test cases
print(count_palindromic_substrings("abc"))  # 3
print(count_palindromic_substrings("aaa"))  # 6
print(count_palindromic_substrings("aba"))  # 4
