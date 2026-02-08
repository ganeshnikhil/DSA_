#include <stdio.h>
#include <string.h>

#define MAX 100

int isPalindrome(char s[], int start, int end) {
    if (start >= end)
        return 1;
    if (s[start] != s[end])
        return 0;
    return isPalindrome(s, start + 1, end - 1);
}

int main() {
    char s[MAX];
    printf("Enter the string: ");
    scanf("%s", s);

    int n = strlen(s);
    int maxLen = 1, startIdx = 0;

    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            if (isPalindrome(s, i, j) && (j - i + 1) > maxLen) {
                maxLen = j - i + 1;
                startIdx = i;
            }
        }
    }

    printf("Longest Palindromic Substring: ");
    for (int i = startIdx; i < startIdx + maxLen; i++)
        printf("%c", s[i]);
    printf("\n");

    return 0;
}
