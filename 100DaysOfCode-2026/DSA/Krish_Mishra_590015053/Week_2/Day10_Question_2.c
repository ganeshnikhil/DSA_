#include <stdio.h>
#include <string.h>
#include <ctype.h>

void removeAllSpaces(char str[], char result[]) {
    int i, j = 0;
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ')
            result[j++] = str[i];
    }
    result[j] = '\0';
}
void trimSpaces(char str[], char result[]) {
    int start = 0, end = strlen(str) - 1;
    while (str[start] == ' ')
        start++;
    while (str[end] == ' ')
        end--;
    int j = 0;
    for (int i = start; i <= end; i++)
        result[j++] = str[i];
    result[j] = '\0';
}
void singleSpaces(char str[], char result[]) {
    int i = 0, j = 0;
    int inWord = 0;
    while (str[i] != '\0') {
        if (str[i] != ' ') {
            result[j++] = str[i];
            inWord = 1;
        } else {
            if (inWord) {
                result[j++] = ' ';
                inWord = 0;
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
    char noSpace[200], trimmed[200], singleSpaced[200];

    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);
    if (input[strlen(input) - 1] == '\n')
        input[strlen(input) - 1] = '\0';

    removeAllSpaces(input, noSpace);
    trimSpaces(input, trimmed);
    singleSpaces(trimmed, singleSpaced);  // Trim first, then remove extra spaces

    printf("Remove all: \"%s\"\n", noSpace);
    printf("Trim: \"%s\"\n", trimmed);
    printf("Single spaces: \"%s\"\n", singleSpaced);

    return 0;
}
