#include <stdio.h>
#include <string.h>

void printLongestPalindromicSubstring(char str[]) {
    int n = strlen(str);
    int start = 0, maxLength = 1;

    int dp[n][n];
    memset(dp, 0, sizeof(dp));

    for (int i = 0; i < n; i++)
        dp[i][i] = 1;

    for (int i = 0; i < n - 1; i++) {
        if (str[i] == str[i + 1]) {
            dp[i][i + 1] = 1;
            start = i;
            maxLength = 2;
        }
    }

    for (int len = 3; len <= n; len++) {
        for (int i = 0; i < n - len + 1; i++) {
            int j = i + len - 1;

            if (str[i] == str[j] && dp[i + 1][j - 1]) {
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
        printf("%c", str[i]);
    printf("\n");
}

int main() {
    char input[] = "babad";
    printLongestPalindromicSubstring(input);
    return 0;
}
