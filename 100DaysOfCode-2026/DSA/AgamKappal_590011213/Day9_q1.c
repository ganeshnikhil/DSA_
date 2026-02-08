
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[1000], cleaned[1000];
    int i, j = 0;
    int is_palindrome = 1;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character
    str[strcspn(str, "\n")] = 0;

    // Clean string: only alphabetic characters, convert to lowercase
    for (i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            cleaned[j++] = tolower(str[i]);
        }
    }
    cleaned[j] = '\0';

    // Check for palindrome
    int len = strlen(cleaned);
    for (i = 0; i < len / 2; i++) {
        if (cleaned[i] != cleaned[len - i - 1]) {
            is_palindrome = 0;
            break;
        }
    }

    if (is_palindrome) {
        printf("true\n");
    } else {
        printf("false\n");
    }

    return 0;
}
