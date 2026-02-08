#include <stdio.h>
#include <string.h>

#define MAX_CHAR 256

char first_non_repeating(const char *s) {
    int freq[MAX_CHAR] = {0};

    // First pass: count frequency of each character
    for (int i = 0; s[i] != '\0'; i++) {
        freq[(unsigned char)s[i]]++;
    }

    // Second pass: find first character with frequency 1
    for (int i = 0; s[i] != '\0'; i++) {
        if (freq[(unsigned char)s[i]] == 1) {
            return s[i];
        }
    }

    return -1;  // No non-repeating character found
}

int main() {
    char str[1000];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove trailing newline if any
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n')
        str[len - 1] = '\0';

    char result = first_non_repeating(str);

    if (result == -1)
        printf("Output: -1 (No non-repeating character found)\n");
    else
        printf("Output: '%c'\n", result);

    return 0;
}
