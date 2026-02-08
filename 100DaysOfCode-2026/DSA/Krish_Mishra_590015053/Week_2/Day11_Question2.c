#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void longestPalindromicSubstring(char* str) {
    int n = strlen(str);
    if (n == 0) {
        printf("Empty string.\n");
        return;
    }
    bool dp[n][n];
    int maxLength = 1;
    int start = 0;
    for (int i = 0; i < n; i++)
        dp[i][i] = true;
    for (int i = 0; i < n - 1; i++) {
        if (str[i] == str[i + 1]) {
            dp[i][i + 1] = true;
            start = i;
            maxLength = 2;
        } else {
            dp[i][i + 1] = false;
        }
    }
    for (int len = 3; len <= n; len++) {
        for (int i = 0; i <= n - len; i++) {
            int j = i + len - 1;
            if (str[i] == str[j] && dp[i + 1][j - 1]) {
                dp[i][j] = true;
                if (len > maxLength) {
                    start = i;
                    maxLength = len;
                }
            } else {
                dp[i][j] = false;
            }
        }
    }
    printf("Longest Palindromic Substring: ");
    for (int i = start; i < start + maxLength; i++)
        printf("%c", str[i]);
    printf("\n");
}

int main() {
    char input[1000];
    printf("Enter the string: ");
    scanf("%s", input);
    longestPalindromicSubstring(input);
    return 0;
}
