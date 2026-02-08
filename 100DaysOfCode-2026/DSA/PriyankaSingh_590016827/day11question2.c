#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// Function to find the longest palindromic substring
void longestPalindromicSubstring(const char *str) 
{
    int n = strlen(str);
    if (n == 0) 
    {
        printf("Empty string\n");
        return;
    }

    // Creating a DP table to store palindrome information
    bool dp[n][n];
    memset(dp, 0, sizeof(dp));

    // All substrings of length 1 are palindromes
    for (int i = 0; i < n; i++) 
    {
        dp[i][i] = true;
    }

    int maxLength = 1;
    int start = 0;

    // Checking for substrings of length 2
    for (int i = 0; i < n - 1; i++) 
    {
        if (str[i] == str[i + 1]) 
        {
            dp[i][i + 1] = true;
            start = i;
            maxLength = 2;
        }
    }

    // Checking for substrings longer than 2
    for (int len = 3; len <= n; len++) 
    {
        for (int i = 0; i < n - len + 1; i++) 
        {
            int j = i + len - 1;  // Ending index of substring

            if (str[i] == str[j] && dp[i + 1][j - 1]) 
            {
                dp[i][j] = true;
                if (len > maxLength) 
                {
                    start = i;
                    maxLength = len;
                }
            }
        }
    }

    // Printing the longest palindromic substring
    printf("Longest palindromic substring: ");
    for (int i = start; i < start + maxLength; i++) 
    {
        printf("%c", str[i]);
    }
    printf("\nLength: %d\n", maxLength);
}

int main() 
{
    char input[1000];

    printf("Enter a string to find its longest palindromic substring:\n");
    fgets(input, sizeof(input), stdin);

    // Removing the newline character if present
    input[strcspn(input, "\n")] = '\0';

    longestPalindromicSubstring(input);

    return 0;
}