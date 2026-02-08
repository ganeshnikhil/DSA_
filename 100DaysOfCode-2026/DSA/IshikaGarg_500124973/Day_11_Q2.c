#include <stdio.h>
#include <string.h>

int main() {
    char s[1000]; fgets(s, sizeof(s), stdin); s[strcspn(s, "\n")] = 0;
    int n = strlen(s);
    int dp[n][n]; 
    int maxLen = 1, start = 0;

    for (int i = 0; i < n; i++) dp[i][i] = 1;
    for (int len = 2; len <= n; len++) {
        for (int i = 0; i <= n - len; i++) {
            int j = i + len - 1;
            if (s[i] == s[j]) {
                dp[i][j] = (len == 2) ? 1 : dp[i+1][j-1];
                if (dp[i][j] && len > maxLen) {
                    maxLen = len;
                    start = i;
                }
            } else {
                dp[i][j] = 0;
            }
        }
    }

    for (int i = start; i < start + maxLen; i++) putchar(s[i]);
    putchar('\n');
    return 0;
}
