#include <stdio.h>
#include <string.h>

int expandAroundCenter(const char *s, int left, int right) {
    while (left >= 0 && right < strlen(s) && s[left] == s[right]) {
        left--;
        right++;
    }
    return right - left - 1; 
}

void longestPalindromicSubstring(char *s) {
    int n = strlen(s);
    if (n == 0) {
        printf("Empty string\n");
        return;
    }

    int start = 0, maxLen = 1;

    for (int i = 0; i < n; i++) {
        int len1 = expandAroundCenter(s, i, i);       
        int len2 = expandAroundCenter(s, i, i + 1);   
        int len = (len1 > len2) ? len1 : len2;

        if (len > maxLen) {
            maxLen = len;
            start = i - (len - 1) / 2;
        }
    }

    printf("Longest Palindromic Substring: ");
    for (int i = start; i < start + maxLen; i++) {
        putchar(s[i]);
    }
    printf("\n");
}

int main() {
    char input[1000];

    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);

    input[strcspn(input, "\n")] = '\0';

    longestPalindromicSubstring(input);

    return 0;
}
