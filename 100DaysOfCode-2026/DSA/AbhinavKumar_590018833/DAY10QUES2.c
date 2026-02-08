#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void removeAllSpaces(char str[], char result[]) {
    int j = 0;
    for (int i = 0; str[i]; i++)
        if (str[i] != ' ')
            result[j++] = str[i];
    result[j] = '\0';
}

void trimSpaces(char str[], char result[]) {
    int start = 0, end = strlen(str) - 1;
    while (str[start] == ' ') start++;
    while (str[end] == ' ') end--;

    int j = 0;
    for (int i = start; i <= end; i++)
        result[j++] = str[i];
    result[j] = '\0';
}

void singleSpaces(char str[], char result[]) {
    int j = 0;
    bool inSpace = false;
    int start = 0, end = strlen(str) - 1;

    
    while (str[start] == ' ') start++;
    while (str[end] == ' ') end--;

    for (int i = start; i <= end; i++) {
        if (str[i] != ' ') {
            result[j++] = str[i];
            inSpace = false;
        } else if (!inSpace) {
            result[j++] = ' ';
            inSpace = true;
        }
    }
    result[j] = '\0';
}

int main() {
    char str[100], all[100], trimmed[100], single[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    removeAllSpaces(str, all);
    trimSpaces(str, trimmed);
    singleSpaces(str, single);

    printf("Remove all: \"%s\"\n", all);
    printf("Trim: \"%s\"\n", trimmed);
    printf("Single spaces: \"%s\"\n", single);

    return 0;
}
