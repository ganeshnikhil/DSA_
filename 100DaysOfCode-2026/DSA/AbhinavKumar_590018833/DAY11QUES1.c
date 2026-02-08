#include <stdio.h>
#include <string.h>

int isAlphaNum(char ch) {
    return (ch >= 'A' && ch <= 'Z') || 
           (ch >= 'a' && ch <= 'z') || 
           (ch >= '0' && ch <= '9');
}

char toLower(char ch) {
    if (ch >= 'A' && ch <= 'Z') return ch + 32;
    return ch;
}

int isCleanedPalindrome(char str[]) {
    char cleaned[1000];
    int j = 0;

    
    for (int i = 0; str[i]; i++) {
        if (isAlphaNum(str[i])) {
            cleaned[j++] = toLower(str[i]);
        }
    }
    cleaned[j] = '\0';

    for (int i = 0, k = j - 1; i < k; i++, k--) {
        if (cleaned[i] != cleaned[k]) return 0;
    }
    return 1;
}

int main() {
    char str[1000];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    if (isCleanedPalindrome(str))
        printf("true\n");
    else
        printf("false\n");

    return 0;
}