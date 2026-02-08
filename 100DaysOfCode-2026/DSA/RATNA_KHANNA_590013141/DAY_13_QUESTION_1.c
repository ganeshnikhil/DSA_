#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n') {
            str[i] = '\0';
            break;
        }
    }
    int wordCount = 0, maxLen = 0, len = 0;
    char longestWord[100], currentWord[100];
    int i = 0, j = 0;
    while (str[i] != '\0') {
        if (str[i] != ' ') {
            currentWord[j++] = str[i];
        } else if (j > 0) {
            currentWord[j] = '\0';
            wordCount++;

            if (j > maxLen) {
                maxLen = j;
                strcpy(longestWord, currentWord);
            }
            j = 0; 
        }
        i++;
    }
    if (j > 0) {
        currentWord[j] = '\0';
        wordCount++;

        if (j > maxLen) {
            maxLen = j;
            strcpy(longestWord, currentWord);
        }
    }

    printf("Word count: %d\n", wordCount);
    printf("Longest word: \"%s\"\n", longestWord);

    return 0;
}
