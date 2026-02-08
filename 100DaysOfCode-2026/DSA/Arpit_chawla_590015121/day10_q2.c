#include <stdio.h>
#include <string.h>
#include <ctype.h>

void removeAllSpaces(char *str, char *result) {
    int j = 0;
    for (int i = 0; str[i]; i++) {
        if (str[i] != ' ') {
            result[j++] = str[i];
        }
    }
    result[j] = '\0';
}

void trimSpaces(char *str, char *result) {
    int start = 0, end = strlen(str) - 1;

    while (isspace(str[start])) start++;
    while (end >= start && isspace(str[end])) end--;

    int j = 0;
    for (int i = start; i <= end; i++) {
        result[j++] = str[i];
    }
    result[j] = '\0';
}

void removeExtraSpaces(char *str, char *result) {
    int i = 0, j = 0;
    int spaceFlag = 0;

    while (str[i]) {
        if (!isspace(str[i])) {
            result[j++] = str[i];
            spaceFlag = 0;
        } else if (!spaceFlag) {
            result[j++] = ' ';
            spaceFlag = 1;
        }
        i++;
    }

    if (j > 0 && result[j - 1] == ' ') j--;
    result[j] = '\0';
}

int main() {
    char input[200];
    char noSpaces[200], trimmed[200], singleSpaced[200];

    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = 0;

    removeAllSpaces(input, noSpaces);
    trimSpaces(input, trimmed);
    removeExtraSpaces(trimmed, singleSpaced);

    printf("Original: \"%s\"\n", input);
    printf("All spaces removed: \"%s\"\n", noSpaces);
    printf("Trimmed (leading/trailing removed): \"%s\"\n", trimmed);
    printf("Single spaces only: \"%s\"\n", singleSpaced);

    return 0;
}
