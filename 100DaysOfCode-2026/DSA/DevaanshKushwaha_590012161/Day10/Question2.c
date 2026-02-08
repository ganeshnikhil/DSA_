#include <stdio.h>
#include <string.h>

// Remove all spaces
void removeAllSpaces(const char *str, char *result) {
    while (*str != '\0') {
        if (*str != ' ')
            *result++ = *str;
        str++;
    }
    *result = '\0';
}

// Trim leading and trailing spaces
void trimSpaces(const char *str, char *result) {
    const char *start = str;
    const char *end;

    while (*start == ' ') start++;
    end = start + strlen(start) - 1;
    while (end > start && *end == ' ') end--;

    while (start <= end)
        *result++ = *start++;
    *result = '\0';
}

// Replace multiple spaces between words with single space
void singleSpace(const char *str, char *result) {
    int inSpace = 0;
    while (*str != '\0') {
        if (*str != ' ') {
            *result++ = *str;
            inSpace = 0;
        } else if (!inSpace) {
            *result++ = ' ';
            inSpace = 1;
        }
        str++;
    }
    *result = '\0';
}

int main() {
    char input[200], all[200], trimmed[200], single[200];

    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);

    // Remove trailing newline
    input[strcspn(input, "\n")] = '\0';

    removeAllSpaces(input, all);
    trimSpaces(input, trimmed);
    singleSpace(trimmed, single); // Works on trimmed to clean up both sides

    printf("Remove all: \"%s\"\n", all);
    printf("Trim: \"%s\"\n", trimmed);
    printf("Single spaces: \"%s\"\n", single);

    return 0;
}
