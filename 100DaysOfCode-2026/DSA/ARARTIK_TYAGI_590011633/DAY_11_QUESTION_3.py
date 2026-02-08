def count_palindromic_substrings(s):
    count = 0
    n = len(s)

    for center in range(n):
        # Odd-length palindromes
        l, r = center, center
        while l >= 0 and r < n and s[l] == s[r]:
            count += 1
            l -= 1
            r += 1

        # Even-length palindromes
        l, r = center, center + 1
        while l >= 0 and r < n and s[l] == s[r]:
            count += 1
            l -= 1
            r += 1

    return count

# User input
user_input = input("Enter a string to count all palindromic substrings: ")
print("Output:", count_palindromic_substrings(user_input))