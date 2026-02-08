#include <stdio.h>
#include <string.h>

void longestPalindrome(char *s, char *result) {
    int n = strlen(s);
    int start = 0, maxLen = 1;
    int dp[n][n];

    memset(dp, 0, sizeof(dp));

    for (int i = 0; i < n; i++) {
        dp[i][i] = 1;
    }

    for (int i = 0; i < n - 1; i++) {
        if (s[i] == s[i + 1]) {
            dp[i][i + 1] = 1;
            start = i;
            maxLen = 2;
        }
    }

    for (int len = 3; len <= n; len++) {
        for (int i = 0; i <= n - len; i++) {
            int j = i + len - 1;
            if (s[i] == s[j] && dp[i + 1][j - 1]) {
                dp[i][j] = 1;
                if (len > maxLen) {
                    start = i;
                    maxLen = len;
                }
            }
        }
    }

    strncpy(result, s + start, maxLen);
    result[maxLen] = '\0';
}

int main() {
    char input[] = "babad";
    char result[100];
    longestPalindrome(input, result);
    printf("%s\n", result);
    return 0;
}
