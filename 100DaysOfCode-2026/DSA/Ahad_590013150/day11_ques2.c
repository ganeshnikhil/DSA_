#include <stdio.h>
#include <string.h>

void longestPalindrome(char *s) {
    int n = strlen(s);
    int start = 0, maxLength = 1;

    int dp[n][n];
    memset(dp, 0, sizeof(dp));

    for (int i = 0; i < n; i++)
        dp[i][i] = 1;

    for (int i = 0; i < n - 1; i++) {
        if (s[i] == s[i + 1]) {
            dp[i][i + 1] = 1;
            start = i;
            maxLength = 2;
        }
    }

    for (int len = 3; len <= n; len++) {
        for (int i = 0; i <= n - len; i++) {
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
    for (int i = start; i < start + maxLength; i++)
        putchar(s[i]);
    printf("\n");
}

int main() {
    char input[1001];
    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = 0; // remove trailing newline

    longestPalindrome(input);
    return 0;
}
