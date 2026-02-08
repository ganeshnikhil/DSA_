#include <stdio.h>
#include <string.h>

#define MAX 1000

void longestPalindrome(char str[]) {
    int n = strlen(str), start = 0, maxLen = 1;
    int dp[MAX][MAX] = {0};

    for (int i = 0; i < n; i++) dp[i][i] = 1;

    for (int l = 2; l <= n; l++) {
        for (int i = 0; i <= n - l; i++) {
            int j = i + l - 1;
            if (str[i] == str[j]) {
                if (l == 2 || dp[i + 1][j - 1]) {
                    dp[i][j] = 1;
                    if (l > maxLen) {
                        start = i;
                        maxLen = l;
                    }
                }
            }
        }
    }

    printf("Longest Palindromic Substring: ");
    for (int i = start; i < start + maxLen; i++) putchar(str[i]);
    printf("\n");
}

int main() {
    char str[MAX];
    printf("Enter a string: ");
    fgets(str, MAX, stdin);
    str[strcspn(str, "\n")] = '\0'; 

    longestPalindrome(str);
    return 0;
}
