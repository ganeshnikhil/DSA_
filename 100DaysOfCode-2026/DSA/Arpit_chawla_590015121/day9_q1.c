#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>

bool isPalindrome(char str[]) {
    char clean[100];
    int len = 0;

    for (int i = 0; str[i]; i++) {
        if (isalpha(str[i])) {
            clean[len++] = tolower(str[i]);
        }
    }

    clean[len] = '\0';

    int start = 0;
    int end = len - 1;

    while (start < end) {
        if (clean[start] != clean[end]) {
            return false;
        }
        start++;
        end--;
    }

    return true;
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;

    if (isPalindrome(str)) {
        printf("true\n");
    } else {
        printf("false\n");
    }

    return 0;
}
