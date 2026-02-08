#include <stdio.h>
#include <string.h>

void longestPalindrome(char str[]) {
    int n = strlen(str);
    if (n == 0) {
        printf("Empty string\n");
        return;
    }

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

    for (int k = 3; k <= n; k++) {
        for (int i = 0; i < n - k + 1; i++) {
            int j = i + k - 1;

            if (dp[i + 1][j - 1] && str[i] == str[j]) {
                dp[i][j] = 1;

                if (k > maxLength) {
                    start = i;
                    maxLength = k;
                }
            }
        }
    }

    printf("Longest Palindromic Substring is: ");
    for (int i = start; i < start + maxLength; i++)
        printf("%c", str[i]);
    printf("\n");
}

int main() {
    char str[1000];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int len = strlen(str);
    if (len > 0 && str[len - 1] == '\n')
        str[len - 1] = '\0';

    longestPalindrome(str);

    return 0;
}
