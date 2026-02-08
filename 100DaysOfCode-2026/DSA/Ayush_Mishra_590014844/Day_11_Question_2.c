#include <stdio.h>
#include <string.h>
void longest_palindrome(char *s) {
    int n = strlen(s);
    int start = 0, maxLen = 1;
    int dp[n][n];
    memset(dp, 0, sizeof(dp));

    for (int i = 0; i < n; i++) dp[i][i] = 1;

    for (int cl = 2; cl <= n; cl++) {
        for (int i = 0; i <= n - cl; i++) {
            int j = i + cl - 1;
            if (s[i] == s[j] && (cl == 2 || dp[i+1][j-1])) {
                dp[i][j] = 1;
                if (cl > maxLen) {
                    start = i;
                    maxLen = cl;
                }
            }
        }
    }

    printf("Longest Palindromic Substring: ");
    for (int i = start; i < start + maxLen; i++)
        putchar(s[i]);
    printf("\n");
}

int main() {
    longest_palindrome("babad");
    longest_palindrome("cbbd");
}
