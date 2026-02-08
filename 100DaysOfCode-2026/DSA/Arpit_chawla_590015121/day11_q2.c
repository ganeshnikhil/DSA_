#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define MAX 1000

void longestPalindrome(char str[]) {
    int n = strlen(str);
    bool dp[MAX][MAX] = {false};
    
    int start = 0;
    int maxLength = 1;

    for (int i = 0; i < n; i++)
        dp[i][i] = true;

    for (int i = 0; i < n - 1; i++) {
        if (str[i] == str[i + 1]) {
            dp[i][i + 1] = true;
            start = i;
            maxLength = 2;
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
            }
        }
    }

    printf("Longest Palindromic Substring: ");
    for (int i = start; i < start + maxLength; i++)
        printf("%c", str[i]);
    printf("\n");
}

int main() {
    char input[MAX];

    printf("Enter a string: ");
    fgets(input, MAX, stdin);

    size_t len = strlen(input);
    if (input[len - 1] == '\n') {
        input[len - 1] = '\0';
    }

    longestPalindrome(input);

    return 0;
}
