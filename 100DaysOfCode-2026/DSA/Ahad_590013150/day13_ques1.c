#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[1000];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int wordCount = 0, maxLen = 0;
    char longestWord[100] = "";
    char currentWord[100] = "";
    int i = 0, j = 0;

    while (str[i] != '\0') {
        // Skip leading spaces
        while (isspace(str[i])) i++;

        j = 0;
        // Collect a word
        while (str[i] != '\0' && !isspace(str[i])) {
            currentWord[j++] = str[i++];
        }
        currentWord[j] = '\0';

        // If a word was found
        if (j > 0) {
            wordCount++;
            if (j > maxLen) {
                maxLen = j;
                strcpy(longestWord, currentWord);
            }
        }
    }

    printf("Word count: %d\n", wordCount);
    printf("Longest word: \"%s\"\n", longestWord);
    return 0;
}
