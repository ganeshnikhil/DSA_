def longest_palindromic_substring(s):
    r = ''
    for i in range(len(s)):
        for j in range(i, len(s)):
            sub = s[i:j+1]
            if sub == sub[::-1] and len(sub) > len(r):
                r = sub
    return r
print(longest_palindromic_substring(input()))
# Example usage
# text = "babad"    
#output: "bab" or "aba"