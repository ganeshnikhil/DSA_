
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void removeAllSpaces(char* str, char* result) {
    int j = 0;
    for (int i = 0; str[i]; i++) {
        if (str[i] != ' ')
            result[j++] = str[i];
    }
    result[j] = '\0';
}

void trimSpaces(char* str, char* result) {
    int start = 0;
    while (str[start] == ' ') start++;
    int end = strlen(str) - 1;
    while (str[end] == ' ') end--;
    int j = 0;
    for (int i = start; i <= end; i++) {
        result[j++] = str[i];
    }
    result[j] = '\0';
}

void removeExtraSpaces(char* str, char* result) {
    int i = 0, j = 0;
    int space = 0;
    while (str[i] == ' ') i++;
    for (; str[i]; i++) {
        if (str[i] != ' ') {
            result[j++] = str[i];
            space = 0;
        } else if (!space) {
            result[j++] = ' ';
            space = 1;
        }
    }
    if (j > 0 && result[j - 1] == ' ') j--;
    result[j] = '\0';
}

int main() {
    char str[200];
    fgets(str, 200, stdin);
    str[strcspn(str, "\n")] = 0;

    char noSpaces[200], trimmed[200], singleSpaces[200];

    removeAllSpaces(str, noSpaces);
    trimSpaces(str, trimmed);
    removeExtraSpaces(str, singleSpaces);

    printf("Remove all: "%s"\n", noSpaces);
    printf("Trim: "%s"\n", trimmed);
    printf("Single spaces: "%s"\n", singleSpaces);

    return 0;
}
