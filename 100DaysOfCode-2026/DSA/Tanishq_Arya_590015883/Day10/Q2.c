#include <stdio.h>
#include <string.h>

void removeAllSpaces(const char *input, char *output) {
    int j = 0;
    for (int i = 0; input[i]; i++) {
        if (input[i] != ' ') {
            output[j++] = input[i];
        }
    }
    output[j] = '\0';
}

void trimSpaces(const char *input, char *output) {
    int start = 0;
    int end = strlen(input) - 1;

    while (input[start] == ' ') {
        start++;
    }

    while (input[end] == ' ' && end >= start) {
        end--;
    }

    int j = 0;
    for (int i = start; i <= end; i++) {
        output[j++] = input[i];
    }
    output[j] = '\0';
}

void removeExtraSpaces(const char *input, char *output) {
    int i = 0, j = 0;
    int inWord = 0;

    while (input[i] == ' ') i++;

    for (; input[i] != '\0'; i++) {
        if (input[i] != ' ') {
            output[j++] = input[i];
            inWord = 1;
        } else if (inWord) {
            output[j++] = ' ';
            inWord = 0;

            while (input[i + 1] == ' ') i++;
        }
    }

    if (j > 0 && output[j - 1] == ' ') {
        j--;
    }

    output[j] = '\0';
}

int main() {
    char input[200];
    char allRemoved[200], trimmed[200], singleSpaced[200];

    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = '\0';  

    removeAllSpaces(input, allRemoved);
    trimSpaces(input, trimmed);
    removeExtraSpaces(input, singleSpaced);

    printf("Remove all spaces: \"%s\"\n", allRemoved);
    printf("Trimmed: \"%s\"\n", trimmed);
    printf("Single spaces only: \"%s\"\n", singleSpaced);

    return 0;
}
