#include <stdio.h>
#include <string.h>
#include <ctype.h>

void removeAllSpaces(char str[], char result[]) {
    int i = 0, j = 0;
    while (str[i]) {
        if (str[i] != ' ')
            result[j++] = str[i];
        i++;
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
    int space = 0;

   
    while (str[i] == ' ') i++;

    while (str[i]) {
        if (str[i] != ' ') {
            result[j++] = str[i];
            space = 0;
        } else {
            if (!space) {
                result[j++] = ' ';
                space = 1;
            }
        }
        i++;
    }

    if (j > 0 && result[j - 1] == ' ')
        j--;

    result[j] = '\0';
}

int main() {
    char input[200];
    char noSpaces[200], trimmed[200], singleSpace[200];

    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);

    input[strcspn(input, "\n")] = '\0';

    removeAllSpaces(input, noSpaces);
    trimSpaces(input, trimmed);
    removeExtraSpaces(input, singleSpace);

    printf("\nOriginal:       \"%s\"\n", input);
    printf("No spaces:      \"%s\"\n", noSpaces);
    printf("Trimmed:        \"%s\"\n", trimmed);
    printf("Single spaced:  \"%s\"\n", singleSpace);

    return 0;
}
