#include <stdio.h>
#include <string.h>
void findLongestPalindromicSubstring(const char *s, char *result) {
    int n = strlen(s);
    if (n == 0) { result[0] = '\0'; return; }
    int start = 0, maxLength = 1;
    int dp[n][n];
    memset(dp, 0, sizeof(dp));
    for (int i = 0; i < n; i++) { dp[i][i] = 1; }
    for (int i = 0; i < n - 1; i++) {
        if (s[i] == s[i + 1]) { dp[i][i + 1] = 1; start = i; maxLength = 2; }
    }
    for (int length = 3; length <= n; length++) {
        for (int i = 0; i < n - length + 1; i++) {
            int j = i + length - 1;
            if (s[i] == s[j] && dp[i + 1][j - 1]) {
                dp[i][j] = 1; start = i; maxLength = length;
            }
        }
    }
    strncpy(result, s + start, maxLength); result[maxLength] = '\0';
}
int main(){
    char input1[]="babad",input2[]="cbbd",result[100];
    findLongestPalindromicSubstring(input1,result);
    printf("Input:\"%s\"\nOutput:\"%s\"\n",input1,result);
    findLongestPalindromicSubstring(input2,result);
    printf("Input:\"%s\"\nOutput:\"%s\"\n",input2,result);
    return 0;
}