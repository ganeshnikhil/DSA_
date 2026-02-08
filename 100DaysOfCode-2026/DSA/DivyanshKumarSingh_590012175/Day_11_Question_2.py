def longestPalindrome(string):
    n = len(string)
    if n == 0:
        return ""
    
    dp = [[False] * n for _ in range(n)]

    start = 0 
    mlen = 1 

    for i in range(n):
        dp[i][i] = True
        

    for i in range(n - 1):
        if string[i] == string[i + 1]:
            dp[i][i + 1] = True
            start = i
            mlen = 2
            

    for length in range(3, n + 1):
        for i in range(n - length + 1):
            j = i + length - 1 

            if string[i] == string[j] and dp[i + 1][j - 1]:
                dp[i][j] = True
                start = i
                mlen = length

    return string[start:start + mlen]



inp = input("Enter a string: ")

res = longestPalindrome(inp)
print("Longest Palindromic substring:", res)
