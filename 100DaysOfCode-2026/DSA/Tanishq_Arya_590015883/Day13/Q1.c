#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_LEN 1000

int main() {
    char str[MAX_LEN];
    printf("Enter a string:\n");
    fgets(str, MAX_LEN, stdin);

    int i = 0, wordCount = 0, maxLen = 0, len = strlen(str);
    char longestWord[MAX_LEN] = "";
    char currentWord[MAX_LEN];
    int j = 0;

    while (i <= len) {
        if (!isspace(str[i]) && str[i] != '\0' && str[i] != '\n') {
            currentWord[j++] = str[i];
        } else {
            if (j > 0) {
                currentWord[j] = '\0';
                wordCount++;
                if (j > maxLen) {
                    maxLen = j;
                    strcpy(longestWord, currentWord);
                }
                j = 0; 
            }
        }
        i++;
    }

    printf("Word count: %d\n", wordCount);
    printf("Longest word: \"%s\"\n", longestWord);

    return 0;
}
