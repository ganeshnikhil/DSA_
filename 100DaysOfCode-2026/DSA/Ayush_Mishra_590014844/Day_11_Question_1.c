#include <stdio.h>
#include <ctype.h>
#include <string.h>
int is_palindrome(const char *str) {
    char cleaned[1000];
    int len = 0;
    for (int i = 0; str[i]; i++) {
        if (isalnum(str[i])) {
            cleaned[len++] = tolower(str[i]);
        }
    }

    for (int i = 0; i < len / 2; i++) {
        if (cleaned[i] != cleaned[len - 1 - i]) return 0;
    }
    return 1;
}

int main() {
    printf("%d\n", is_palindrome("A man, a plan, a canal: Panama")); // 1
    printf("%d\n", is_palindrome("race a car"));                     // 0
}
