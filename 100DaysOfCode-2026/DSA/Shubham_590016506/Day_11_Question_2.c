#include <stdio.h>
#include <string.h>

char* longestPalindrome(char* s) {
    int start = 0, maxLen = 0, len = strlen(s);
    for (int i = 0; i < len; i++) {
        for (int j = 0; j <= 1; j++) {
            int l = i, r = i + j;
            while (l >= 0 && r < len && s[l] == s[r]) {
                if (r - l + 1 > maxLen) {
                    start = l;
                    maxLen = r - l + 1;
                }
                l--; r++;
            }
        }
    }
    static char res[1001];
    strncpy(res, s + start, maxLen);
    res[maxLen] = '\0';
    return res;
}

int main() {
    char s[] = "babad";
    printf("%s\n", longestPalindrome(s));
}