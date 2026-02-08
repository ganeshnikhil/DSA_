#include <stdio.h>
#include <string.h>

// Function to print the longest palindromic substring
void longestPalindrome(char *s) {
    int n = strlen(s);
    if (n == 0) {
        printf("Empty string.\n");
        return;
    }

    int start = 0, maxLength = 1;
    int dp[n][n];

    memset(dp, 0, sizeof(dp));

    // All substrings of length 1 are palindromes
    for (int i = 0; i < n; i++)
        dp[i][i] = 1;

    // Check for substring of length 2
    for (int i = 0; i < n - 1; i++) {
        if (s[i] == s[i + 1]) {
            dp[i][i + 1] = 1;
            start = i;
            maxLength = 2;
        }
    }

    // Check for lengths greater than 2
    for (int len = 3; len <= n; len++) {
        for (int i = 0; i < n - len + 1; i++) {
            int j = i + len - 1;

            if (s[i] == s[j] && dp[i + 1][j - 1]) {
                dp[i][j] = 1;

                if (len > maxLength) {
                    start = i;
                    maxLength = len;
                }
            }
        }
    }

    printf("Longest Palindromic Substring: ");
    for (int i = start; i < start + maxLength; i++) {
        printf("%c", s[i]);
    }
    printf("\n");
}

int main() {
    char input[1000];
    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);

    // Remove trailing newline
    input[strcspn(input, "\n")] = '\0';

    longestPalindrome(input);
    return 0;
}
