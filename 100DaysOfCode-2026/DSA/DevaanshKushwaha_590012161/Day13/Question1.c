#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[1000];
    printf("Enter a string:\n");
    fgets(str, sizeof(str), stdin);

    int maxLen = 0, currentLen = 0, wordCount = 0;
    char longestWord[100], currentWord[100];
    int i = 0, j = 0;

    while (str[i]) {
        if (!isspace(str[i])) {
            currentWord[j++] = str[i];
            currentLen++;
        } else if (j > 0) {
            currentWord[j] = '\0';
            wordCount++;

            if (currentLen > maxLen) {
                maxLen = currentLen;
                strcpy(longestWord, currentWord);
            }

            j = currentLen = 0;
        }
        i++;
    }

    // To handle last word if not followed by space
    if (j > 0) {
        currentWord[j] = '\0';
        wordCount++;
        if (currentLen > maxLen) {
            strcpy(longestWord, currentWord);
        }
    }

    printf("Word Count: %d\n", wordCount);
    printf("Longest Word: %s\n", longestWord);

    return 0;
}
