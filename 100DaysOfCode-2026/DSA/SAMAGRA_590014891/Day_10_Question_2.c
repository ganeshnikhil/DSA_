#include <stdio.h>
#include <string.h>

void removeAllSpaces(char str[], char result[]) {
    int j = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ')
            result[j++] = str[i];
    }
    result[j] = '\0';
}

void trimSpaces(char str[], char result[]) {
    int start = 0, end = strlen(str) - 1;

    while (str[start] == ' ') start++;
    while (str[end] == ' ' && end > start) end--;

    int j = 0;
    for (int i = start; i <= end; i++)
        result[j++] = str[i];
    result[j] = '\0';
}

void removeExtraSpaces(char str[], char result[]) {
    int i = 0, j = 0;

    while (str[i] == ' ') i++; 

    while (str[i] != '\0') {
        if (str[i] != ' ') {
            result[j++] = str[i];
        } else {
            result[j++] = ' ';
            while (str[i] == ' ') i++; 
            continue;
        }
        i++;
    }

    if (j > 0 && result[j - 1] == ' ')
        j--; 

    result[j] = '\0';
}

int main() {
    char str[200];
    char all[200], trimmed[200], single[200];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    removeAllSpaces(str, all);
    trimSpaces(str, trimmed);
    removeExtraSpaces(str, single);

    printf("\nRemove all: \"%s\"\n", all);
    printf("Trim: \"%s\"\n", trimmed);
    printf("Single spaces: \"%s\"\n", single);

    return 0;
}
