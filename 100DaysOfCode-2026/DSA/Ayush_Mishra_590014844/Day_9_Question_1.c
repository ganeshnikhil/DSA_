#include<stdio.h>
#include<ctype.h>
#include<string.h>
int isPalindrome(const char *s) {
    char filtered[1000];
    int idx = 0;

    // Filter only alphabetic characters and convert to lowercase
    for (int i = 0; s[i]; i++) {
        if (isalpha(s[i])) {
            filtered[idx++] = tolower(s[i]);
        }
    }
    filtered[idx] = '\0';

    // Compare from both ends
    for (int i = 0, j = idx - 1; i < j; i++, j--) {
        if (filtered[i] != filtered[j]) return 0;
    }
    return 1;
}
