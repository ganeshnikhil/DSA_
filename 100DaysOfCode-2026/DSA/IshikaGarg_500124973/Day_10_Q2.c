#include <stdio.h>
#include <string.h>
#include <ctype.h>

void removeAllSpaces(const char *input, char *output) {
    while (*input) {
        if (*input != ' ') {
            *output++ = *input;
        }
        input++;
    }
    *output = '\0';
}

void trimSpaces(const char *input, char *output) {
    const char *start = input;
    while (*start == ' ') start++;

    const char *end = input + strlen(input) - 1;
    while (end > start && *end == ' ') end--;

    while (start <= end) {
        *output++ = *start++;
    }
    *output = '\0';
}

void singleSpaces(const char *input, char *output) {
    int spaceFlag = 0;
    while (*input) {
        if (*input != ' ') {
            *output++ = *input;
            spaceFlag = 0;
        } else if (!spaceFlag) {
            *output++ = ' ';
            spaceFlag = 1;
        }
        input++;
    }
    // Remove trailing space if any
    if (output > output && *(output - 1) == ' ') {
        output--;
    }
    *output = '\0';
}

int main() {
    char input[200];
    char all[200], trimmed[200], single[200];

    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = 0;

    removeAllSpaces(input, all);
    trimSpaces(input, trimmed);
    singleSpaces(trimmed, single); // trim first before reducing inner spaces

    printf("Remove all: \"%s\"\n", all);
    printf("Trim: \"%s\"\n", trimmed);
    printf("Single spaces: \"%s\"\n", single);

    return 0;
}
